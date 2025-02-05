/*
 * read_pin.c
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

uint8_t ledStatus = OFF;

void readPA2State(void) {

	// check and enable read operation on GPIO A for PA2


	// read input data register on GPIO A for PA2 (high should turn the LED on and GND should turn off)

	if (status is on) {

		ledStatus = ON;

	}

	blinkLed(ledStatus);

}
