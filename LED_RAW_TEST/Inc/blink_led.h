/*
 * blink_led.h
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#pragma once

#ifndef BLINK_LED_H_
#define BLINK_LED_H_

#include <stdint.h>

int32_t *pGPIOA_CLK_EN = (int32_t *) 	0x40023830; // address for RCC_ AHB1ENR
int32_t *pGPIOA_MODE_OUT = (int32_t *) 	0x40020000; // Address for GPIOx_MODER
int32_t *pGPIOA_DATA_OUT = (int32_t *) 	0x40020014; // Address for GPIOx_ODR

typedef enum {
	AUTO_BLINK = 	(1 << 1),
	ON = 			(1 << 0),
	OFF = 			0
} boardLedStatus_e;

extern uint8_t boardLedStatus = OFF;

void blinkLed(int32_t const ledMode);

#endif /* BLINK_LED_H_ */
