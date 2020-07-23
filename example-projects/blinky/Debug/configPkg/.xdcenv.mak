#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source;/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages
override XDCROOT = /home/sascha/ti/ccs1000/xdctools_3_61_00_16_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source;/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages;/home/sascha/ti/ccs1000/xdctools_3_61_00_16_core/packages;..
HOSTOS = Linux
endif
