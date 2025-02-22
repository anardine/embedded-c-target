/*
 * decoder.c
 *
 *  Created on: Feb 16, 2025
 *      Author: alessandro.nardinelli
 */

#include "decoder.h"
#include <stdint.h>
#include <stdio.h>


Message_t decoder(int32_t const inputMessage) {

	Message_t decodedMessage;

	// decoder logic
	int32_t const *p = &inputMessage;
	printf("value of the memory address where the message is stored to: %p \n", p);

	//01001101010011010100010010101001 - 32bit incoming data
	//00000000000000000000111111111111

	// extract and save crc:
	decodedMessage.crc = *p & (3 << 0);
	printf("value of decodedMessage.crc: %X \n",decodedMessage.crc);

	//extract and save status:
	decodedMessage.status = ((*p >> 2) & (1 << 0));
	printf("value of decodedMessage.status: %X \n",decodedMessage.status);

	//extract and save payload:
	decodedMessage.payload = ((*p >> 3) & (0xFFF << 0));
	printf("value of decodedMessage.payload: %X \n",decodedMessage.payload);

	//extract and save batery:
	decodedMessage.bat = ((*p >> 15) & (7 << 0));
	printf("value of decodedMessage.bat: %X \n",decodedMessage.bat);

	//extract and save sensor:
	decodedMessage.sensor = ((*p >> 18) & (7 << 0));
	printf("value of decodedMessage.sensor: %X \n",decodedMessage.sensor);

	//extract and save long address:
	decodedMessage.longAddr = ((*p >> 21) & (0xFF << 0));
	printf("value of decodedMessage.longAddr: %X \n",decodedMessage.longAddr);

	//extract and save short address:
	decodedMessage.shortAddr = ((*p >> 29) & (3 << 0));
	printf("value of decodedMessage.shortAddr: %X \n",decodedMessage.shortAddr);

	//extract and save addr mode:
	decodedMessage.addrMode = ((*p >> 31) & (1 << 0));
	printf("value of decodedMessage.addrMode: %X \n",decodedMessage.addrMode);


	return decodedMessage;

}
