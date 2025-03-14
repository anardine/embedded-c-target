/*
 * decoder.h
 *
 *  Created on: Feb 16, 2025
 *      Author: alessandro.nardinelli
 */

#ifndef DECODER_H_
#define DECODER_H_

#include <stdint.h>

typedef union {

	int32_t messageValue;

		struct {

		int32_t crc			:2; //far most right
		int32_t status		:1;
		int32_t payload		:12;
		int32_t bat			:3;
		int32_t sensor		:3;
		int32_t longAddr	:8;
		int32_t shortAddr	:2;
		int32_t addrMode	:1; //far most left

	} MessageFields;

}Message;

Message decoder(int32_t const inputMessage);

#endif /* DECODER_H_ */
