################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32F401RE_DRIVER/GPIO_DRIVER.c 

OBJS += \
./STM32F401RE_DRIVER/GPIO_DRIVER.o 

C_DEPS += \
./STM32F401RE_DRIVER/GPIO_DRIVER.d 


# Each subdirectory must supply rules for building sources it contributes
STM32F401RE_DRIVER/GPIO_DRIVER.o: ../STM32F401RE_DRIVER/GPIO_DRIVER.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F401RETx -DSTM32F4 -DDEBUG -c -I../Inc -I"D:/embedded system/sections/empedded_system_diploma/unit_7/stm32f401re/stm32f401re/STM32F401RE_DRIVER/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32F401RE_DRIVER/GPIO_DRIVER.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

