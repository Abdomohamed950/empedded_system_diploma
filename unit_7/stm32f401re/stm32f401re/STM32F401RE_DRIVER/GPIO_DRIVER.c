/*
 * GPIO_DRIVER.c
 *
 *  Created on: Jul 24, 2023
 *      Author: abdom
 */


#include <STM32F401RE.h>
#include <stdint.h>
#include <stdlib.h>
#include <GPIO_DRIVER.h>
void gpio_init()
{
	RCC->AHB1ENR |= 1<<1;
}
