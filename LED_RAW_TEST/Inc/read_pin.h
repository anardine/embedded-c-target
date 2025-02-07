/*
 * read_pin.h
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#pragma once

#ifndef READ_PIN_H_
#define READ_PIN_H_


void readPC0State(void);

int32_t *pGPIOC_CLK_EN = (int32_t *) 	0x40023830; // address for RCC_ AHB1ENR
int32_t *pGPIOC_MODE_IN = (int32_t *) 	0x40020800; // Address for GPIOC_MODER
int32_t *pGPIOC_INDR = (int32_t *) 	0x40020810; // Address for GPIOC_IDR (input data register)

#endif /* READ_PIN_H_ */
