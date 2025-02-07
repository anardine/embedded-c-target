/*
 * blink_led.c
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#import "blink_led.h"

void blinkLed(int32_t const ledMode) {

	// check if RCC_AHB1ENR on GPIOA is enable, if not, enable it
	*pGPIOA_CLK_EN & (1 << 0) ? 1 : (*pGPIOA_CLK_EN |= (1 << 0));

	// check if GPIOx_MODER on PA5 is enable, if not, enable it. If it is set to anything, we clear  to set
	((*pGPIOA_MODE_OUT >> 10) & (3 << 0)) ? *pGPIOA_MODE_OUT &= ~(3 << 10) : (*pGPIOA_MODE_OUT |= (1 << 10));


	if (ledMode == AUTO_BLINK) {

		*pGPIOA_DATA_OUT |= (1 << 5); // EN LD2
		// Delay
		for (int i=0; i<=1000000; i++);
		*pGPIOA_DATA_OUT &= ~(1 << 5); //OFF LD2
		// Delay
		for (int i=0; i<=1000000; i++);

	} else if (ledMode == ON) {

		*pGPIOA_DATA_OUT |= (1 << 5); // EN LD2

	} else if (ledMode == OFF) {

		*pGPIOA_DATA_OUT &= ~(1 << 5); //OFF LD2
	}
}
