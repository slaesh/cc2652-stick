################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../blinky.cfg 

SYSCFG_SRCS += \
../blinky.syscfg 

LDS_SRCS += \
../CC2652RB_LAUNCHXL_TIRTOS.lds 

C_SRCS += \
../CC2652RB_LAUNCHXL_fxns.c \
../blinky.c \
./syscfg/ti_devices_config.c \
./syscfg/ti_drivers_config.c \
../led_task.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt \
./syscfg/ti_devices_config.c \
./syscfg/ti_drivers_config.c 

GEN_MISC_DIRS += \
./configPkg/ \
./syscfg/ 

C_DEPS += \
./CC2652RB_LAUNCHXL_fxns.d \
./blinky.d \
./syscfg/ti_devices_config.d \
./syscfg/ti_drivers_config.d \
./led_task.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./CC2652RB_LAUNCHXL_fxns.o \
./blinky.o \
./syscfg/ti_devices_config.o \
./syscfg/ti_drivers_config.o \
./led_task.o 

GEN_MISC_FILES += \
./syscfg/ti_drivers_config.h \
./syscfg/ti_utils_build_linker.cmd.exp \
./syscfg/syscfg_c.rov.xs 

GEN_MISC_DIRS__QUOTED += \
"configPkg/" \
"syscfg/" 

OBJS__QUOTED += \
"CC2652RB_LAUNCHXL_fxns.o" \
"blinky.o" \
"syscfg/ti_devices_config.o" \
"syscfg/ti_drivers_config.o" \
"led_task.o" 

GEN_MISC_FILES__QUOTED += \
"syscfg/ti_drivers_config.h" \
"syscfg/ti_utils_build_linker.cmd.exp" \
"syscfg/syscfg_c.rov.xs" 

C_DEPS__QUOTED += \
"CC2652RB_LAUNCHXL_fxns.d" \
"blinky.d" \
"syscfg/ti_devices_config.d" \
"syscfg/ti_drivers_config.d" \
"led_task.d" 

GEN_FILES__QUOTED += \
"configPkg/linker.cmd" \
"configPkg/compiler.opt" \
"syscfg/ti_devices_config.c" \
"syscfg/ti_drivers_config.c" 

C_SRCS__QUOTED += \
"../CC2652RB_LAUNCHXL_fxns.c" \
"../blinky.c" \
"./syscfg/ti_devices_config.c" \
"./syscfg/ti_drivers_config.c" \
"../led_task.c" 

SYSCFG_SRCS__QUOTED += \
"../blinky.syscfg" 


