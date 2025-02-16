/*
 * decoder.h
 *
 *  Created on: Feb 16, 2025
 *      Author: alessandro.nardinelli
 */

#ifndef DECODER_H_
#define DECODER_H_

#include <stdint.h>

typedef struct  {

	char crc;
	char status;
	int16_t payload;
	char bat;
	char sensor;
	int8_t longAddr;
	char shortAddr;
	char addrMode;

} Message_t;

Message_t decoder(int32_t const inputMessage);

#endif /* DECODER_H_ */
