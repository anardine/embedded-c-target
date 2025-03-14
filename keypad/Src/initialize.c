/*
 * initialize.c
 *
 *  Created on: Mar 2, 2025
 *      Author: alessandro.nardinelli
 */

#include "initialize.h"

void initialize(void) {

	// enabling the RCC in pins A, B and C
	RCC_AHB1ENR_t *pToGPIOAClock = (RCC_AHB1ENR_t *) 0x40023830;

	pToGPIOAClock->GPIOAEN = ON;
	pToGPIOAClock->GPIOBEN = ON;


	// enabling mode input in A0, A1, A4, A5 to INPUT (00) - A should be COLUMNS
	GPIOA_MODER_t *pToGPIOAMode = (GPIOA_MODER_t *) 0x40020000;
	pToGPIOAMode->MODER0 = OFF;
	pToGPIOAMode->MODER1 = OFF;
	pToGPIOAMode->MODER4 = OFF;
	pToGPIOAMode->MODER5 = OFF;


	// enabling mode output in B0, B1, B4, B5 to OUTPUT (01) - B should be ROWS
	GPIOB_MODER_t *pToGPIOBMode = (GPIOB_MODER_t *) 0x40020400;
	pToGPIOBMode->MODER0 = ON;
	pToGPIOBMode->MODER1 = ON;
	pToGPIOBMode->MODER4 = ON;
	pToGPIOBMode->MODER5 = ON;


	// Set B (Rows) to High as default and A (Columns) to 0 as default
	GPIOB_ODR_t *pToGPIOBOutput = (GPIOB_ODR_t *) 0x40020414;
	pToGPIOBOutput->ODR0 = ON;
	pToGPIOBOutput->ODR1 = ON;
	pToGPIOBOutput->ODR2 = ON;
	pToGPIOBOutput->ODR3 = ON;


	GPIOA_IDR_t *pToGPIOAInput = (GPIOA_IDR_t *) 0x40020010;
	pToGPIOAInput->IDR0 = OFF;
	pToGPIOAInput->IDR1 = OFF;
	pToGPIOAInput->IDR2 = OFF;
	pToGPIOAInput->IDR3 = OFF;

}
