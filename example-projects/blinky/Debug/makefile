################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major

GEN_OPTS__FLAG := @"configPkg/compiler.opt" 
GEN_CMDS__FLAG := -Wl,-T"configPkg/linker.cmd" 

ORDERED_OBJS += \
"./CC2652RB_LAUNCHXL_fxns.o" \
"./blinky.o" \
"./syscfg/ti_devices_config.o" \
"./syscfg/ti_drivers_config.o" \
"./led_task.o" \
-Wl,-T"../CC2652RB_LAUNCHXL_TIRTOS.lds" \
$(GEN_CMDS__FLAG) \
-l:"ti/display/lib/display.am4fg" \
-l:"ti/grlib/lib/gcc/m4f/grlib.a" \
-l:"third_party/spiffs/lib/gcc/m4f/spiffs_cc26xx.a" \
-l:"ti/drivers/lib/drivers_cc26x2.am4fg" \
-l:"third_party/fatfs/lib/gcc/m4f/fatfs.a" \
-l:"ti/dpl/lib/dpl_cc26x2.am4fg" \
-l:"ti/devices/cc13x2_cc26x2/driverlib/bin/gcc/driverlib.lib" \
-lgcc \
-lc \
-lm \
-lnosys \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
blinky.out \

EXE_OUTPUTS__QUOTED += \
"blinky.out" \

BIN_OUTPUTS += \
blinky.hex \

BIN_OUTPUTS__QUOTED += \
"blinky.hex" \


# All Target
all: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "blinky.out"

# Tool invocations
blinky.out: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: GNU Linker'
	"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/bin/arm-none-eabi-gcc-9.2.1" -mfpu=fpv4-sp-d16 -DDeviceFamily_CC26X2 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -mcpu=cortex-m4 -Wl,-Map,"blinky.map" -nostartfiles -static -Wl,--gc-sections -L"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/source" -L"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages" -L"/home/sascha/ti/simplelink_cc13x2_26x2_sdk_4_20_00_35/kernel/tirtos/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/lib/thumb/v7e-m/hard" -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nano.specs -o"blinky.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

blinky.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: GNU Objcopy Utility'
	"/home/sascha/ti/ccs1000/ccs/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major/bin/arm-none-eabi-objcopy"  $(EXE_OUTPUTS__QUOTED) "blinky.hex"
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "CC2652RB_LAUNCHXL_fxns.o" "blinky.o" "syscfg/ti_devices_config.o" "syscfg/ti_drivers_config.o" "led_task.o" 
	-$(RM) "CC2652RB_LAUNCHXL_fxns.d" "blinky.d" "syscfg/ti_devices_config.d" "syscfg/ti_drivers_config.d" "led_task.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

