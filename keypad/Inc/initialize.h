/*
 * initialize.h
 *
 *  Created on: Mar 2, 2025
 *      Author: alessandro.nardinelli
 */

#pragma once

#ifndef INITIALIZE_H_
#define INITIALIZE_H_

#include <stdint.h>


typedef enum {
	ON = 1,
	OFF = 0
}STATUS;

typedef struct {
		int32_t GPIOAEN			:1;
		int32_t GPIOBEN			:1;
		int32_t GPIOCEN			:1;
		int32_t GPIODEN			:1;
		int32_t GPIOEEN			:1;
		int32_t RESERVED_1		:2;
		int32_t GPIOHEN			:1;
		int32_t RESERVED_2		:4;
		int32_t CRCEN			:1;
		int32_t RESERVED_3		:8;
		int32_t DMA1EN			:1;
		int32_t DMA2EN			:1;
		int32_t RESERVED_4		:9;

	}RCC_AHB1ENR_t;


	typedef struct {
		int32_t MODER0			:2;
		int32_t MODER1			:2;
		int32_t MODER2			:2;
		int32_t MODER3			:2;
		int32_t MODER4			:2;
		int32_t MODER5			:2;
		int32_t MODER6			:2;
		int32_t MODER7			:2;
		int32_t MODER8			:2;
		int32_t MODER9			:2;
		int32_t MODER10			:2;
		int32_t MODER11			:2;
		int32_t MODER12			:2;
		int32_t MODER13			:2;
		int32_t MODER14			:2;
		int32_t MODER15			:2;

	}GPIOA_MODER_t;


	typedef struct {
		int32_t MODER0			:2;
		int32_t MODER1			:2;
		int32_t MODER2			:2;
		int32_t MODER3			:2;
		int32_t MODER4			:2;
		int32_t MODER5			:2;
		int32_t MODER6			:2;
		int32_t MODER7			:2;
		int32_t MODER8			:2;
		int32_t MODER9			:2;
		int32_t MODER10			:2;
		int32_t MODER11			:2;
		int32_t MODER12			:2;
		int32_t MODER13			:2;
		int32_t MODER14			:2;
		int32_t MODER15			:2;

	}GPIOB_MODER_t;


	typedef struct {
		int32_t IDR0			:1;
		int32_t IDR1			:1;
		int32_t IDR2			:1;
		int32_t IDR3			:1;
		int32_t Reserved		:28;

	}GPIOA_IDR_t;


	typedef struct {
		int32_t ODR0			:1;
		int32_t ODR1			:1;
		int32_t ODR2			:1;
		int32_t ODR3			:1;
		int32_t Reserved		:28;

	}GPIOB_ODR_t;


void initialize(void);

void setPUPDResistors(void);


#endif /* INITIALIZE_H_ */
