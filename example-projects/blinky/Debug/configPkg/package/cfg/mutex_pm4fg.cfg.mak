# invoke SourceDir generated makefile for mutex.pm4fg
mutex.pm4fg: .libraries,mutex.pm4fg
.libraries,mutex.pm4fg: package/cfg/mutex_pm4fg.xdl
	$(MAKE) -f /home/sascha/workspace_ccs/4.2.00.35/blinky/src/makefile.libs

clean::
	$(MAKE) -f /home/sascha/workspace_ccs/4.2.00.35/blinky/src/makefile.libs clean

