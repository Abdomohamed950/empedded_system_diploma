################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
clk_conf.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
clk_conf.list \

OBJCOPY_BIN += \
clk_conf.bin \


# All Target
all: clk_conf.elf secondary-outputs

# Tool invocations
clk_conf.elf: $(OBJS) $(USER_OBJS) D:\embedded\ system\sections\empedded_system_diploma\unit_6_arch\lesson3\lap2\clk_conf\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "clk_conf.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\embedded system\sections\empedded_system_diploma\unit_6_arch\lesson3\lap2\clk_conf\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="clk_conf.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

clk_conf.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "clk_conf.list"
	@echo 'Finished building: $@'
	@echo ' '

clk_conf.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "clk_conf.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
