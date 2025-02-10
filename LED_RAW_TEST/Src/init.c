/*
 * init.c
 *
 *  Created on: Feb 9, 2025
 *      Author: alessandro.nardinelli
 */

#include "init.h"
#include "blink_led.h"
#include "read_pin.h"

void init(void) {

	// PIN GPIO A INIT
	// check if RCC_AHB1ENR on GPIOA is enable, if not, enable it
	*pGPIOA_CLK_EN & (1 << 0) ? 1 : (*pGPIOA_CLK_EN |= (1 << 0));

	// check if GPIOx_MODER on PA5 is enable, if not, enable it. If it is set to anything, we clear  to set
	((*pGPIOA_MODE_OUT >> 10) & (3 << 0)) ? *pGPIOA_MODE_OUT &= ~(3 << 10) : (*pGPIOA_MODE_OUT |= (1 << 10));


	// PIN GPIO C INIT
	// check and enable clock on GPIO C for PC0
	*pGPIOC_CLK_EN & (1 << 2) ? 1 : (*pGPIOC_CLK_EN |= (1 << 2));

	// set mode to input in PC0 (input mode is two bits zeroed in first pos (/...00)
	*pGPIOC_MODE_IN & (3 << 0) ? (*pGPIOC_MODE_IN &= ~(3 << 0)) : 1;
}
