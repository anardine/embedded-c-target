/*
 * read_pin.h
 *
 *  Created on: Feb 5, 2025
 *      Author: alessandro.nardinelli
 */

#pragma once

#ifndef READ_PIN_H_
#define READ_PIN_H_

#include <stdint.h>

void readPC0State(void);

uint8_t static volatile led = 0;


#endif /* READ_PIN_H_ */
