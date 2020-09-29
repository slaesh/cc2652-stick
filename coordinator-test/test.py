from subprocess import Popen, PIPE

import sys
import getopt
import glob
import time
import os
import traceback

# version
__version__ = "1.0"

# Verbose level
QUIET = 5

try:
    import serial
except ImportError:
    print('{} requires the Python serial library'.format(sys.argv[0]))
    print('Please install it with:')
    print('')
    print('   pip3 install pyserial')
    sys.exit(1)


def mdebug(level, message, attr='\n'):
    if QUIET >= level:
        print(message, end=attr, file=sys.stderr)

RETURN_CMD_STRS = {0x40: 'Success',
                   0x41: 'Unknown command',
                   0x42: 'Invalid command',
                   0x43: 'Invalid address',
                   0x44: 'Flash fail'
                   }

COMMAND_RET_SUCCESS = 0x40
COMMAND_RET_UNKNOWN_CMD = 0x41
COMMAND_RET_INVALID_CMD = 0x42
COMMAND_RET_INVALID_ADR = 0x43
COMMAND_RET_FLASH_FAIL = 0x44


class CmdException(Exception):
    pass


class CommandInterface(object):

    ACK_BYTE = 0xCC
    NACK_BYTE = 0x33

    def open(self, aport=None, abaudrate=500000):
        # Try to create the object using serial_for_url(), or fall back to the
        # old serial.Serial() where serial_for_url() is not supported.
        # serial_for_url() is a factory class and will return a different
        # object based on the URL. For example serial_for_url("/dev/tty.<xyz>")
        # will return a serialposix.Serial object for Ubuntu or Mac OS;
        # serial_for_url("COMx") will return a serialwin32.Serial oject for Windows OS.
        # For that reason, we need to make sure the port doesn't get opened at
        # this stage: We need to set its attributes up depending on what object
        # we get.
        try:
            self.sp = serial.serial_for_url(aport, do_not_open=True, timeout=10)
        except AttributeError:
            self.sp = serial.Serial(port=None, timeout=10)
            self.sp.port = aport

        if ((os.name == 'nt' and isinstance(self.sp, serial.serialwin32.Serial)) or \
           (os.name == 'posix' and isinstance(self.sp, serial.serialposix.Serial))):
            self.sp.baudrate=abaudrate        # baudrate
            self.sp.bytesize=8                # number of databits
            self.sp.parity=serial.PARITY_NONE # parity
            self.sp.stopbits=1                # stop bits
            self.sp.xonxoff=0                 # s/w (XON/XOFF) flow control
            self.sp.rtscts=0                  # h/w (RTS/CTS) flow control
            self.sp.timeout=0.5               # set the timeout value

        self.sp.open()

    def invoke_bootloader(self, dtr_active_high=False, inverted=False):
        # Use the DTR and RTS lines to control bootloader and the !RESET pin.
        # This can automatically invoke the bootloader without the user
        # having to toggle any pins.
        #
        # If inverted is False (default):
        # DTR: connected to the bootloader pin
        # RTS: connected to !RESET
        # If inverted is True, pin connections are the other way round
        if inverted:
            set_bootloader_pin = self.sp.setRTS
            set_reset_pin = self.sp.setDTR
        else:
            set_bootloader_pin = self.sp.setDTR
            set_reset_pin = self.sp.setRTS

        set_bootloader_pin(1 if not dtr_active_high else 0)
        set_reset_pin(0)
        set_reset_pin(1)
        set_reset_pin(0)
        # Make sure the pin is still asserted when the chip
        # comes out of reset. This fixes an issue where
        # there wasn't enough delay here on Mac.
        time.sleep(0.002)
        set_bootloader_pin(0 if not dtr_active_high else 1)

        # Some boards have a co-processor that detects this sequence here and
        # then drives the main chip's BSL enable and !RESET pins. Depending on
        # board design and co-processor behaviour, the !RESET pin may get
        # asserted after we have finished the sequence here. In this case, we
        # need a small delay so as to avoid trying to talk to main chip before
        # it has actually entered its bootloader mode.
        #
        # See contiki-os/contiki#1533
        time.sleep(0.1)

    def skip_bootloader(self, dtr_active_high=False, inverted=False):
        if inverted:
            set_bootloader_pin = self.sp.setRTS
            set_reset_pin = self.sp.setDTR
        else:
            set_bootloader_pin = self.sp.setDTR
            set_reset_pin = self.sp.setRTS

        set_bootloader_pin(0 if not dtr_active_high else 1) # normal operation
        set_reset_pin(0)
        set_reset_pin(1)
        set_reset_pin(0)
        time.sleep(0.5)

    def close(self):
        self.sp.close()

    def _wait_for_ack(self, info="", timeout=1):
        stop = time.time() + timeout
        got = bytearray(2)
        while got[-2] != 00 or got[-1] not in (CommandInterface.ACK_BYTE,
                                               CommandInterface.NACK_BYTE):
            got += self._read(1)
            if time.time() > stop:
                raise CmdException("Timeout waiting for ACK/NACK after '%s'"
                                   % (info,))

        # Our bytearray's length is: 2 initial bytes + 2 bytes for the ACK/NACK
        # plus a possible N-4 additional (buffered) bytes
        mdebug(10, "Got %d additional bytes before ACK/NACK" % (len(got) - 4,))

        # wait for ask
        ask = got[-1]

        if ask == CommandInterface.ACK_BYTE:
            # ACK
            return 1
        elif ask == CommandInterface.NACK_BYTE:
            # NACK
            mdebug(10, "Target replied with a NACK during %s" % info)
            return 0

        # Unknown response
        mdebug(10, "Unrecognised response 0x%x to %s" % (ask, info))
        return 0

    def _write(self, data, is_retry=False):
        if type(data) == int:
            assert data < 256
            goal = 1
            written = self.sp.write(bytes([data]))
        elif type(data) == bytes or type(data) == bytearray:
            goal = len(data)
            written = self.sp.write(data)
        else:
            raise CmdException("Internal Error. Bad data type: {}"
                               .format(type(data)))

        if written < goal:
            mdebug(10, "*** Only wrote {} of target {} bytes"
                   .format(written, goal))
            if is_retry and written == 0:
                raise CmdException("Failed to write data on the serial bus")
            mdebug(10, "*** Retrying write for remainder")
            if type(data) == int:
                return self._write(data, is_retry=True)
            else:
                return self._write(data[written:], is_retry=True)

    def _read(self, length):
        return bytearray(self.sp.read(length))

    def receivePacket(self):
        # stop = time.time() + 5
        # got = None
        # while not got:
        got = self._read(2)
        #     if time.time() > stop:
        #         break

        # if not got:
        #     raise CmdException("No response to %s" % info)

        size = got[0]  # rcv size
        chks = got[1]  # rcv checksum
        data = bytearray(self._read(size - 2))  # rcv data

        mdebug(10, "*** received %x bytes" % size)
        if chks == sum(data) & 0xFF:
            self.sendAck()
            return data
        else:
            self.sendNAck()
            # TODO: retry receiving!
            raise CmdException("Received packet checksum error")
            return 0

    def cmdGetChipId(self):
        cmd = 0x28
        lng = 3

        self._write(lng)  # send size
        self._write(cmd)  # send checksum
        self._write(cmd)  # send data

        mdebug(10, "*** GetChipId command (0x28)")
        if self._wait_for_ack("Get ChipID (0x28)"):
            # 4 byte answ, the 2 LSB hold chip ID
            version = self.receivePacket()
            if self.checkLastCmd():
                assert len(version) == 4, ("Unreasonable chip "
                                           "id: %s" % repr(version))
                mdebug(10, "    Version 0x%02X%02X%02X%02X" % tuple(version))
                chip_id = (version[2] << 8) | version[3]
                return chip_id
            else:
                raise CmdException("GetChipID (0x28) failed")

    def cmdReadFwVersion(self):
        # send a version request
        self._write(254)
        self._write(0)
        self._write(33)
        self._write(2)
        self._write(35)

#---> 00: 00 (0)
#---> 01: fe (254) => PING starts here
#---> 02: 06 (6)
#---> 03: 41 (65)
#---> 04: 80 (128)
#---> 05: 00 (0)
#---> 06: 02 (2)
#---> 07: 01 (1)
#---> 08: 02 (2)
#---> 09: 07 (7)
#---> 10: 01 (1)
#---> 11: c0 (192)
#---> 12: fe (254) => VERSION starts here
#---> 13: 0e (14)
#---> 14: 61 (97)
#---> 15: 02 (2)
#---> 16: 02 (2)
#---> 17: 01 (1)
#---> 18: 02 (2)
#---> 19: 07 (7)
#---> 20: 01 (1)
#---> 21: 7e (126)
#---> 22: 3d (61)
#---> 23: 34 (52)
#---> 24: 01 (1)
#---> 25: 00 (0)
#---> 26: ff (255)
#---> 27: ff (255)
#---> 28: ff (255)
#---> 29: ff (255)
#---> 30: 1c (28)
#received 31

        mdebug(10, "*** ReadFwVersion cmd")
        
        got = self._read(40)

        idx = 0
        for b in got:
            mdebug(10, "---> %02d: %02x (%d)" % (idx, b, b))
            idx += 1

        mdebug(10, "*** received %d" % (len(got)))
        
        if len(got) < 30:
            raise CmdException("to small")

        if got[1] != 254 | got[2] != 6:
            raise CmdException("no PING first?")

        if got[12] != 254 | got[13] != 14:
            raise CmdException("no version!")

        fw_ver = got[24]
        fw_ver <<= 8
        fw_ver |= got[23]
        fw_ver <<= 8
        fw_ver |= got[22]
        fw_ver <<= 8
        fw_ver |= got[21]

        mdebug(5, "--> ZigBee coordinator is working!")
        mdebug(5, "`---> transportrev %d, product %d, majorrel %d, minorrel %d, maintrel %d, revision: %d" % (
            got[16],
            got[17],
            got[18],
            got[19],
            got[20],
            fw_ver
         ))

        ## just try to read more..

        got = self._read(4)

        for b in got:
            mdebug(10, "---> %x" % b)

        mdebug(10, "*** received %x" % (len(got)))
        

    def sendSynch(self):
        cmd = 0x55

        # flush serial input buffer for first ACK reception
        self.sp.flushInput()

        mdebug(10, "*** sending synch sequence")
        self._write(cmd)  # send U
        self._write(cmd)  # send U
        return self._wait_for_ack("Synch (0x55 0x55)", 2)

    def sendAck(self):
        self._write(0x00)
        self._write(0xCC)
        return

    def sendNAck(self):
        self._write(0x00)
        self._write(0x33)
        return

    def checkLastCmd(self):
        stat = self.cmdGetStatus()
        if not (stat):
            raise CmdException("No response from target on status request. "
                               "(Did you disable the bootloader?)")

        if stat[0] == COMMAND_RET_SUCCESS:
            mdebug(10, "Command Successful")
            return 1
        else:
            stat_str = RETURN_CMD_STRS.get(stat[0], None)
            if stat_str is None:
                mdebug(0, "Warning: unrecognized status returned "
                          "0x%x" % stat[0])
            else:
                mdebug(0, "Target returned: 0x%x, %s" % (stat[0], stat_str))
            return 0

    def cmdGetStatus(self):
        cmd = 0x23
        lng = 3

        self._write(lng)  # send size
        self._write(cmd)  # send checksum
        self._write(cmd)  # send data

        mdebug(10, "*** GetStatus command (0x23)")
        if self._wait_for_ack("Get Status (0x23)"):
            stat = self.receivePacket()
            return stat


def print_version():
    # Get the version using "git describe".
    try:
        p = Popen(['git', 'describe', '--tags', '--match', '[0-9]*'],
                  stdout=PIPE, stderr=PIPE)
        p.stderr.close()
        line = p.stdout.readlines()[0]
        version = line.decode('utf-8').strip()
    except:
        # We're not in a git repo, or git failed, use fixed version string.
        version = __version__
    print('%s %s' % (sys.argv[0], version))


def usage():
    print("""Usage: %s [-p port] [-b baud] \
    [--bootloader-active-high] [--bootloader-invert-lines]
    -h, --help                   This help
    -p port                      Serial port (default: first USB-like port in /dev)
    -b baud                      Baud speed (default: 115200)
    --bootloader-active-high     Use active high signals to enter bootloader
    --bootloader-invert-lines    Inverts the use of RTS and DTR to enter bootloader
    --version                    Print script version

    """ % (sys.argv[0], sys.argv[0], sys.argv[0]))

if __name__ == "__main__":

    conf = {
            'port': 'auto',
            'baud': 115200,
            'bootloader_active_high': False,
            'bootloader_invert_lines': False,
        }

# http://www.python.org/doc/2.5.2/lib/module-getopt.html

    try:
        opts, args = getopt.getopt(sys.argv[1:],
                                   "h:wvp:b",
                                   ['help', 
                                    'bootloader-active-high',
                                    'bootloader-invert-lines', 'version'])
    except getopt.GetoptError as err:
        # print help information and exit:
        print(str(err))  # will print something like "option -a not recognized"
        usage()
        sys.exit(2)

    for o, a in opts:
        if o == '-h' or o == '--help':
            usage()
            sys.exit(0)
        elif o == '-p':
            conf['port'] = a
        elif o == '-b':
            conf['baud'] = eval(a)
            conf['force_speed'] = 1
        elif o == '--bootloader-active-high':
            conf['bootloader_active_high'] = True
        elif o == '--bootloader-invert-lines':
            conf['bootloader_invert_lines'] = True
        elif o == '--version':
            print_version()
            sys.exit(0)
        else:
            assert False, "Unhandled option"

    try:

        # Try and find the port automatically
        if conf['port'] == 'auto':
            ports = []
            ports.extend(glob.glob('/dev/serial/by-id/*'))

            for p in ports:
                  if ("slae.sh" in p) & ("cc2652rb_stick" in p):
                      conf['port'] = p

                  mdebug(10, "> %s" % p)

            if conf['port'] == 'auto':
               raise CmdException("Stick was not automatically found!")

        cmd = CommandInterface()
        cmd.open(conf['port'], conf['baud'])
        cmd.invoke_bootloader(conf['bootloader_active_high'],
                              conf['bootloader_invert_lines'])
        mdebug(5, "Opening port %(port)s, baud %(baud)d\n"
               % {'port': conf['port'], 'baud': conf['baud']})
        
        if not cmd.sendSynch():
            raise CmdException("Can't connect to target. Ensure boot loader "
                               "is started. (no answer on synch sequence)")

        chip_id = cmd.cmdGetChipId()

        mdebug(5, "--> Bootloader is working!")

        cmd.skip_bootloader(conf['bootloader_active_high'],
                              conf['bootloader_invert_lines'])

        cmd.cmdReadFwVersion()

        mdebug(5, "\nCheck done!")

        cmd.close()

    except Exception as err:
        if QUIET >= 10:
            traceback.print_exc()
        exit('ERROR: %s' % str(err))
