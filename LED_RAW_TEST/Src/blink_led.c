/*
 * blink_led.c
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#import "blink_led.h"
#include "init.h"

void blinkLed(int32_t const ledMode) {


	if (ledMode == AUTO_BLINK) {

		*pGPIOA_DATA_OUT |= (1 << 5); // EN LD2
		// Delay
		for (int i=0; i<=1000000; i++);
		*pGPIOA_DATA_OUT &= ~(1 << 5); //OFF LD2
		// Delay
		for (int i=0; i<=1000000; i++);

	} else if (ledMode == ON) {

		*pGPIOA_DATA_OUT |= (1 << 5); // EN LD2

	} else {

		*pGPIOA_DATA_OUT &= ~(1 << 5); //OFF LD2
	}
}
