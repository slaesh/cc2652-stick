Quick and dirty test-tool to test my stick if it's working properly! :)
(I never used python, guess you will see it!)

Took [Jelmer's](https://github.com/JelmerT/cc2538-bsl) tool as a base implementation.

Thanks and credits going out to him!!

# Usage

Just download the `test.py` and call it via `python3 ./test.py`.
Should detect the serial-port automatically.

If you have multiple sticks attached to your PC/PI, then use the `-p` parameter, like this: `python3 ./test.py -p /dev/ttyUSB0`.

The output should look simular to this:

```
Opening port /dev/serial/by-id/usb-Silicon_Labs_slae.sh_cc2652rb_stick_-_slaesh_s_iot_stuff_00_12_4B_00_21_CC_03_79-if00-port0, baud 115200

--> Bootloader is working!
--> ZigBee coordinator is working!
---> transportrev 2, product 1, majorrel 2, minorrel 7, maintrel 1, revision: 20200925

Check done!
```
