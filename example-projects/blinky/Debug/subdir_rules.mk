################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/bin/arm-none-eabi-gcc-9.2.1" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -I"/home/sascha/workspace_ccs/4.2.00.35/blinky" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source/ti/posix/gcc" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include" -I"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug/syscfg" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

build-866308817:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-866308817-inproc

build-866308817-inproc: ../blinky.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/home/sascha/ti/ccs1000/xdctools_3_61_00_16_core/xs" --xdcpath="/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source;/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages;" xdc.tools.configuro -o configPkg -t gnu.targets.arm.M4F -p ti.platforms.simplelink:CC2642R1F -r release -c "/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major" --compileOptions "-mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -I\"/home/sascha/workspace_ccs/4.2.00.35/blinky\" -I\"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug\" -I\"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source\" -I\"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source/ti/posix/gcc\" -I\"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano\" -I\"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include\" -I\"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include\" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall  -std=c99 " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-866308817 ../blinky.cfg
configPkg/compiler.opt: build-866308817
configPkg/: build-866308817

build-965470241: ../blinky.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"/home/sascha/ti/ccs1000/ccs/utils/sysconfig_1.4.0/sysconfig_cli.sh" -s "/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/.metadata/product.json" -o "syscfg" --compiler gcc "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_devices_config.c: build-965470241 ../blinky.syscfg
syscfg/ti_drivers_config.c: build-965470241
syscfg/ti_drivers_config.h: build-965470241
syscfg/ti_utils_build_linker.cmd.exp: build-965470241
syscfg/syscfg_c.rov.xs: build-965470241
syscfg/: build-965470241

syscfg/%.o: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/bin/arm-none-eabi-gcc-9.2.1" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -I"/home/sascha/workspace_ccs/4.2.00.35/blinky" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source/ti/posix/gcc" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include" -I"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include" -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -I"/home/sascha/workspace_ccs/4.2.00.35/blinky/Debug/syscfg" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


