#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = gnu.targets.arm.M4F{1,0,9.2,1
#
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/mutex_pm4fg.om4fg.dep
package/cfg/mutex_pm4fg.om4fg.dep: ;
endif

package/cfg/mutex_pm4fg.om4fg: | .interfaces
package/cfg/mutex_pm4fg.om4fg: package/cfg/mutex_pm4fg.c package/cfg/mutex_pm4fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clm4fg $< ...
	$(gnu.targets.arm.M4F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -I"/home/sascha/workspace_ccs/4.2.00.35/blinky" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source/ti/posix/gcc" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include" -I"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall  -std=c99  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mutex_pm4fg.h"'  -Dxdc_target_name__=M4F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_9_2_1  -O2   $(XDCINCS) -I/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include/newlib-nano -I/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mutex_pm4fg.om4fg: export LD_LIBRARY_PATH=

package/cfg/mutex_pm4fg.sm4fg: | .interfaces
package/cfg/mutex_pm4fg.sm4fg: package/cfg/mutex_pm4fg.c package/cfg/mutex_pm4fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clm4fg -S $< ...
	$(gnu.targets.arm.M4F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -I"/home/sascha/workspace_ccs/4.2.00.35/blinky" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source/ti/posix/gcc" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include" -I"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall  -std=c99  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mutex_pm4fg.h"'  -Dxdc_target_name__=M4F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_9_2_1  -O2   $(XDCINCS) -I/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include/newlib-nano -I/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mutex_pm4fg.sm4fg: export LD_LIBRARY_PATH=

clean,m4fg ::
	-$(RM) package/cfg/mutex_pm4fg.om4fg
	-$(RM) package/cfg/mutex_pm4fg.sm4fg

mutex.pm4fg: package/cfg/mutex_pm4fg.om4fg package/cfg/mutex_pm4fg.mak

clean::
	-$(RM) package/cfg/mutex_pm4fg.mak
