# invoke SourceDir generated makefile for blinky.pm4fg
blinky.pm4fg: .libraries,blinky.pm4fg
.libraries,blinky.pm4fg: package/cfg/blinky_pm4fg.xdl
	$(MAKE) -f /home/sascha/workspace_ccs/4.2.00.35/blinky/src/makefile.libs

clean::
	$(MAKE) -f /home/sascha/workspace_ccs/4.2.00.35/blinky/src/makefile.libs clean

