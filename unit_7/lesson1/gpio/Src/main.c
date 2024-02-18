/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include <stdint.h>


#define RCC_BASE 0x40021000
#define RCC_APB2ENR		*((volatile uint32_t*)(RCC_BASE + 0X18))

#define IOPA_BASE 0x40010800
#define GPIOA_CRL		*((volatile uint32_t *)(IOPA_BASE + 0X00))
#define GPIOA_CRH		*((volatile uint32_t *)(IOPA_BASE + 0X04))
#define GPIOA_IDR		*((volatile uint32_t *)(IOPA_BASE + 0X08))
//#define GPIOA_ODR		*((volatile uint32_t *)(IOPA_BASE + 0X0C))

#define IOPB_BASE 0x40010C00
#define GPIOB_CRL		*((volatile uint32_t *)(IOPB_BASE + 0X00))
#define GPIOB_CRH		*((volatile uint32_t *)(IOPB_BASE + 0X04))
//#define GPIOB_IDR		*((volatile uint32_t *)(IOPB_BASE + 0X08))
#define GPIOB_ODR		*((volatile uint32_t *)(IOPB_BASE + 0X0C))


int main(void)
{
	//enable clock in PORTA and PORTB
    RCC_APB2ENR |= (0b11 << 2);

    GPIOA_CRL=0x0;
    GPIOA_CRL |= (0b10 << 6);

    GPIOB_CRL=0x0;
//    GPIOB_CRL &= ~(0b11 << 6);
    GPIOB_CRL |= (0b01 << 4);

    GPIOA_CRH=0x0;
    GPIOA_CRH |= (0b10 << 22);

    GPIOB_CRH=0x0;
//    GPIOB_CRH &= ~(0b11 << 6);
    GPIOB_CRH |= (0b01 << 20);

//    GPIOB_ODR = 0xffffffff;
    while(1){

    	if( ((GPIOA_IDR & (1<<1)) >> 1) == 0)
    	{
    		GPIOB_ODR ^= (1<<1);
    		while ( ((GPIOA_IDR & (1<<1)) >> 1)==0);
    	}
    	if( ((GPIOA_IDR & (1<<13)) >> 13) == 1)
    	{
    		GPIOB_ODR ^= (1<<13);

    	}
    	for(int i =0 ; i<512;i++);
    }
}