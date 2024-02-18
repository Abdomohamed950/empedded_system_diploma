/*
 * test.c
 *
 *  Created on: ١٢‏/٠٢‏/٢٠٢٣
 *      Author:abdo mohamed
 */

typedef unsigned int   uint32_t;
#define Rcc_BASE   0x40021000
#define GPIO_BASE   0x40010800
#define RCC_APB2ENR *((volatile uint32_t*)(Rcc_BASE + 0x18 ))
#define RCC_CR *((volatile uint32_t*)(Rcc_BASE + 0x00 ))
#define RCC_CFGR *((volatile uint32_t*)(Rcc_BASE + 0x04 ))
#define GPIO_CHR    *((volatile uint32_t*)(GPIO_BASE + 0x04))
#define GPIO_ODR    *((volatile uint32_t*)(GPIO_BASE + 0x0C))


int main () {


//	Bits 21:18 PLLMUL: PLL multiplication factor
//	0110: PLL input clock x 8

	RCC_CFGR |= (0b0110 << 18);


	//	Bit 24 PLLON: PLL enable
	//	Set and cleared by software to enable PLL.
	//	Cleared by hardware when entering Stop or Standby mode. This bit can not be reset if the
	//	PLL clock is used as system clock or is selected to become the system clock.
	//	0: PLL OFF
	//	1: PLL ON

		RCC_CR |= (0b1 << 24);


	////////////////////default = 0 ///////////////////
//		Bit 16 PLLSRC: PLL entry clock source
//		Set and cleared by software to select PLL clock source. This bit can be written only when
//		PLL is disabled.
//		0: HSI oscillator clock / 2 selected as PLL input clock
//		1: HSE oscillator clock selected as PLL input clock

	////////////////////default = 0 ///////////////////
//	Bits 7:4 HPRE: AHB prescaler
//	Set and cleared by software to control the division factor of the AHB clock.
//	0xxx: SYSCLK not divided

//	Bits 13:11 PPRE2: APB high-speed prescaler (APB2)
//	Set and cleared by software to control the division factor of the APB high-speed clock
//	(PCLK2).
//	0xx: HCLK not divided
//	100: HCLK divided by 2
//	101: HCLK divided by 4
//	110: HCLK divided by 8
//	111: HCLK divided by 16

	RCC_CFGR |= (0b101 << 11);


//	Bits 10:8 PPRE1: APB low-speed prescaler (APB1)
//	Set and cleared by software to control the division factor of the APB low-speed clock
//	(PCLK1).
//	Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
//	0xx: HCLK not divided
//	100: HCLK divided by 2
//	101: HCLK divided by 4
//	110: HCLK divided by 8
//	111: HCLK divided by 16

	RCC_CFGR |= (0b100 << 8);

//		Bits 1:0 SW: System clock switch
//	Set and cleared by software to select SYSCLK source.
//	Set by hardware to force HSI selection when leaving Stop and Standby mode or in case of
//	failure of the HSE oscillator used directly or indirectly as system clock (if the Clock Security
//	System is enabled).
//	00: HSI selected as system clock
//	01: HSE selected as system clock
//	10: PLL selected as system clock
//	11: not allowed

	RCC_CFGR |= (0b10 << 0);


	RCC_APB2ENR |= (1<<2);
	GPIO_CHR &= 0xff0fffff;
	GPIO_CHR |= 0x00200000;
	while (1) {

		GPIO_ODR |= (1<<13);
		for (int i =0; i<50000 ;i++);
		GPIO_ODR &=~ (1<<13);
		for (int i =0; i<50000 ;i++);
	}

	return (0);
}

