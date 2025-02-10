/*
 * read_pin.c
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#include <stdint.h>
#include "read_pin.h"
#include "blink_led.h"
#include "init.h"

void readPC0State(void) {

	// read input data register on GPIO C for PC0 (high should turn the LED on and GND should turn off)
	*pGPIOC_INDR & (1 << 0) ? (boardLedStatus = ON) : (boardLedStatus = OFF);

	blinkLed(boardLedStatus);

}
