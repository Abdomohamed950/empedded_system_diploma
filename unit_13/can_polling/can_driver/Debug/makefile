################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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
can_driver.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
can_driver.list \

OBJCOPY_HEX += \
can_driver.hex \

OBJCOPY_BIN += \
can_driver.bin \


# All Target
all: can_driver.elf secondary-outputs

# Tool invocations
can_driver.elf: $(OBJS) $(USER_OBJS) D:\embedded\ system\sections\empedded_system_diploma\unit_13\can_polling\can_driver\STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "can_driver.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\embedded system\sections\empedded_system_diploma\unit_13\can_polling\can_driver\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="can_driver.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

can_driver.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "can_driver.list"
	@echo 'Finished building: $@'
	@echo ' '

can_driver.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "can_driver.hex"
	@echo 'Finished building: $@'
	@echo ' '

can_driver.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "can_driver.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
