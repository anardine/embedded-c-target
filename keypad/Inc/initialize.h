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


// create the pointers to the memory
// first pointer should be the clock
 int32_t *pToGPIOAClock = (int32_t *) 0x000000;

// second poiinter should be to the mem adress of gpio enable
 int32_t *pToGPIOAMode = (int32_t *) 0x000000;

// third pointer should be to the mem address of input/output
 int32_t *pToGPIOARead = (int32_t *) 0x000000;

 // create the pointers to the memory
 // first pointer should be the clock
  int32_t *pToGPIOCClock = (int32_t *) 0x000000;

 // second poiinter should be to the mem adress of gpio enable
  int32_t *pToGPIOCMode = (int32_t *) 0x000000;

 // third pointer should be to the mem address of input/output
  int32_t *pToGPIOCRead = (int32_t *) 0x000000;


void initialize(void);

void setPUPDResistors(void);


#endif /* INITIALIZE_H_ */
