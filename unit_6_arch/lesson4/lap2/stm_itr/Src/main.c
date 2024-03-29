/*
 * test.c
 *
 *  Created on: ١٢‏/٠٢‏/٢٠٢٣
 *      Author:abdo mohamed
 */

typedef unsigned int   uint32_t;

//	RCC
#define Rcc_BASE   0x40021000
#define RCC_APB2ENR *((volatile uint32_t*)(Rcc_BASE + 0x18 ))

//	GPIO
#define GPIO_BASE   0x40010800
#define GPIO_CRH    *((volatile uint32_t*)(GPIO_BASE + 0x04))
#define GPIO_CRL    *((volatile uint32_t*)(GPIO_BASE + 0x00))
#define GPIO_ODR    *((volatile uint32_t*)(GPIO_BASE + 0x0C))

//EXTI
#define EXTI_BASE   0x40010400
#define EXTI_IMR    *((volatile uint32_t*)(EXTI_BASE + 0x00))
#define EXTI_RTSR    *((volatile uint32_t*)(EXTI_BASE + 0x08))
#define EXTI_PR    *((volatile uint32_t*)(EXTI_BASE + 0x014))

//AFIO
#define AFIO_BASE   0x40010000
#define AFIO_EXTICR1    *((volatile uint32_t*)(AFIO_BASE + 0x08))

//NVIC
#define NVIC_ISER0    *((volatile uint32_t*)(0xE000E100))

void init()
{
	//	APB2 bus enable portA
	RCC_APB2ENR |= (1<<2);
	//	APB2 bus enable AFIO
	RCC_APB2ENR |= (1<<0);
	//set portA.13 output
	GPIO_CRH &= 0xff0fffff;
	GPIO_CRH |= 0x00200000;
	//set portA.1 input
	GPIO_CRL |=(0b00<<4);
	GPIO_CRL |=(0b01<<6);
	// portA is selected to ITR :000: PA selected
	AFIO_EXTICR1 |= 0x0;
	//: Interrupt Mask on line 1
	EXTI_IMR |= (1<<1);
	//: Rising trigger enabled (for Event and Interrupt) for input line
	EXTI_RTSR |= (1<<1);
	//: Interrupt Mask on IQ7 in NVIC
	NVIC_ISER0 |= (1<<7);

}

int main () {

	init();
	while (1);

	return (0);
}

void EXTI1_IRQHandler()
{
	GPIO_ODR ^= (1<<13);
	// clear pending
	EXTI_PR |= (1<<1);
}
