/*
 * stm32f103x6.h
 *
 *  Created on: Jul 15, 2023
 *      Author: abdom
 */

#ifndef INC_STM32F103X6_H_
#define INC_STM32F103X6_H_

//-----------------------------
//Includes
#include<stdlib.h>
#include<stdint.h>
//-----------------------------
//-----------------------------
//Base addresses for Memories
//-----------------------------
#define FLASH_MEMORY_BASE 										0X08000000
#define SYSTEM_MEMORY_BASE 										0X1FFFF000
#define OPTION_BYTES_MEMORY_BASE 								0X1FFFF800
#define SRAM_MEMORY_BASE 										0X20000000
#define PERIPHERALS_MEMORY_BASE 								0X40000000
#define CORTEX_M3_INTERNAL_PERIPHERALS_MEMORY_BASE 				0X08000000
//-----------------------------
//Base addresses for BUS Peripherals
//-----------------------------
//RCC
#define RCC_BASE			0x40021000
//GPIO
#define GPIOA_BASE			0x40010800
#define GPIOB_BASE			0x40010C00
#define GPIOC_BASE			0x40011000
#define GPIOD_BASE			0x40011400
#define GPIOE_BASE			0x40011800
//AFIO
#define AFIO_BASE			0x40010000
//EXTI
#define EXTI_BASE			0x40010400

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register:
//-*-*-*-*-*-*-*-*-*-*-*
//RCC
typedef struct{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
}RCC_R;

//GPIO
typedef struct{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
}GPIOx_R;

//AFIO
typedef struct{
	volatile uint32_t EVCR;
	volatile uint32_t AMPR;
	volatile uint32_t EXTICR1;
	volatile uint32_t EXTICR2;
	volatile uint32_t EXTICR3;
	volatile uint32_t EXTICR4;
	volatile uint32_t RESERVED;
	uint32_t APB1ENR;
	volatile uint32_t MAPR2;

}AFIO_R;

//EXTI

typedef struct{
	volatile uint32_t IMR;
	volatile uint32_t EMR;
	volatile uint32_t RTSR;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER;
	volatile uint32_t PR;
}EXTI_R;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants:
//-*-*-*-*-*-*-*-*-*-*-*
//GPIOX
#define GPIOA				((GPIOx_R *)GPIOA_BASE)
#define GPIOB				((GPIOx_R *)GPIOB_BASE)
#define GPIOC				((GPIOx_R *)GPIOC_BASE)
#define GPIOD				((GPIOx_R *)GPIOD_BASE)
#define GPIOE				((GPIOx_R *)GPIOE_BASE)
//AFIO
#define AFIO				((AFIO_R *)AFIO_BASE)
//EXTI
#define EXTI				((EXTI_R *)EXTI_BASE)
//RCC
#define RCC					((RCC_R *)RCC_BASE)

//-*-*-*-*-*-*-*-*-*-*-*-
//clock enable Macros:
//-*-*-*-*-*-*-*-*-*-*-*
//GPIO EN
#define RCC_GPIOA_CLK_EN()		(RCC->APB2ENR |= 1<<2)
#define RCC_GPIOB_CLK_EN()		(RCC->APB2ENR |= 1<<3)
#define RCC_GPIOC_CLK_EN()		(RCC->APB2ENR |= 1<<4)
#define RCC_GPIOD_CLK_EN()		(RCC->APB2ENR |= 1<<5)
#define RCC_GPIOE_CLK_EN()		(RCC->APB2ENR |= 1<<6)
//AFIO EN
#define RCC_AFIO_CLK_EN()		(RCC->APB2ENR |= 1<<0)
//-*-*-*-*-*-*-*-*-*-*-*-
//Generic Macros:
//-*-*-*-*-*-*-*-*-*-*-*



#endif /* INC_STM32F103X6_H_ */