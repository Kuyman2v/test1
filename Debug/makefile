################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./Src/C6747.obj" \
"./Src/C6747_gpio.obj" \
"./Src/C6747_i2c.obj" \
"./Src/C6747_init.obj" \
"./Src/C6747_uart.obj" \
"./Src/led.obj" \
"./Src/main.obj" \
"./Src/rtc_test.obj" \
"./Src/uart_test.obj" \
"../C6747.cmd" \
"../Lib/rts6740_elf.lib" \
"../Lib/rts6740e_elf.lib" \
$(GEN_CMDS__FLAG) \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Lib/subdir_vars.mk
-include Src/subdir_vars.mk
-include subdir_rules.mk
-include Lib/subdir_rules.mk
-include Src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
test1.out \

EXE_OUTPUTS__QUOTED += \
"test1.out" \

BIN_OUTPUTS += \
test1.hex \

BIN_OUTPUTS__QUOTED += \
"test1.hex" \


# All Target
all: test1.out

# Tool invocations
test1.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/bin/cl6x" -mv6740 -g --define=c6747 --diag_wrap=off --diag_warning=225 --display_error_number -z -m"test1.map" --stack_size=0x800 --heap_size=0x800 -i"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/lib" -i"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="test1_linkInfo.xml" --rom_model -o "test1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

test1.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C6000 Hex Utility'
	"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/bin/hex6x"  -o "test1.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "Src\C6747.d" "Src\C6747_gpio.d" "Src\C6747_i2c.d" "Src\C6747_init.d" "Src\C6747_uart.d" "Src\led.d" "Src\main.d" "Src\rtc_test.d" "Src\uart_test.d" 
	-$(RM) "Src\C6747.obj" "Src\C6747_gpio.obj" "Src\C6747_i2c.obj" "Src\C6747_init.obj" "Src\C6747_uart.obj" "Src\led.obj" "Src\main.obj" "Src\rtc_test.obj" "Src\uart_test.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

