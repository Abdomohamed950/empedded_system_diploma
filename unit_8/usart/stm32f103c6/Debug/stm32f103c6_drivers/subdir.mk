################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../stm32f103c6_drivers/EXTI_driver.c \
../stm32f103c6_drivers/gpio_driver.c \
../stm32f103c6_drivers/uart_driver.c 

OBJS += \
./stm32f103c6_drivers/EXTI_driver.o \
./stm32f103c6_drivers/gpio_driver.o \
./stm32f103c6_drivers/uart_driver.o 

C_DEPS += \
./stm32f103c6_drivers/EXTI_driver.d \
./stm32f103c6_drivers/gpio_driver.d \
./stm32f103c6_drivers/uart_driver.d 


# Each subdirectory must supply rules for building sources it contributes
stm32f103c6_drivers/EXTI_driver.o: ../stm32f103c6_drivers/EXTI_driver.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"D:/embedded system/sections/empedded_system_diploma/unit_8/usart/stm32f103c6/stm32f103c6_drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"stm32f103c6_drivers/EXTI_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
stm32f103c6_drivers/gpio_driver.o: ../stm32f103c6_drivers/gpio_driver.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"D:/embedded system/sections/empedded_system_diploma/unit_8/usart/stm32f103c6/stm32f103c6_drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"stm32f103c6_drivers/gpio_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
stm32f103c6_drivers/uart_driver.o: ../stm32f103c6_drivers/uart_driver.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"D:/embedded system/sections/empedded_system_diploma/unit_8/usart/stm32f103c6/stm32f103c6_drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"stm32f103c6_drivers/uart_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

