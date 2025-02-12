/*
 * init.h
 *
 *  Created on: Feb 9, 2025
 *      Author: alessandro.nardinelli
 */

#pragma once

#ifndef INIT_H_
#define INIT_H_

#include <stdint.h>

void init(void);

static volatile int32_t *pGPIOC_CLK_EN = (int32_t *) 	0x40023830; // address for RCC_ AHB1ENR
static volatile int32_t  *pGPIOC_MODE_IN = (int32_t *) 	0x40020800; // Address for GPIOC_MODER
static volatile int32_t  *pGPIOC_INDR = (int32_t *) 		0x40020810; // Address for GPIOC_IDR (input data register)

static volatile int32_t *pGPIOA_CLK_EN = (int32_t *) 	0x40023830; // address for RCC_ AHB1ENR
static volatile int32_t *pGPIOA_MODE_OUT = (int32_t *) 	0x40020000; // Address for GPIOA_MODER
static volatile int32_t *pGPIOA_DATA_OUT = (int32_t *) 	0x40020014; // Address for GPIOA_ODR (output data register)


#endif /* INIT_H_ */
