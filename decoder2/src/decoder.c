/*
 * decoder.c
 *
 *  Created on: Feb 16, 2025
 *      Author: alessandro.nardinelli
 */

#include "decoder.h"
#include <stdint.h>
#include <stdio.h>


Message decoder(int32_t const inputMessage) {

	Message decoderVar;

	// decoder logic
	//int32_t const *p = &inputMessage;
	//printf("value of the memory address where the message is stored to: %p \n", p);

	// extract and save crc:
	//decodedMessage.crc = *p & (3 << 0);
	printf("value of decodedMessage.crc: %X \n",decoderVar.MessageFields.crc);

	//extract and save status:
	//decodedMessage.status = ((*p >> 2) & (1 << 0));
	printf("value of decodedMessage.status: %X \n",decoderVar.MessageFields.status);

	//extract and save payload:
	//decodedMessage.payload = ((*p >> 3) & (0xFFF << 0));
	printf("value of decodedMessage.payload: %X \n",decoderVar.MessageFields.payload);

	//extract and save batery:
	//decodedMessage.bat = ((*p >> 15) & (7 << 0));
	printf("value of decodedMessage.bat: %X \n",decoderVar.MessageFields.bat);

	//extract and save sensor:
	//decodedMessage.sensor = ((*p >> 18) & (7 << 0));
	printf("value of decodedMessage.sensor: %X \n",decoderVar.MessageFields.sensor);

	//extract and save long address:
	//decodedMessage.longAddr = ((*p >> 21) & (0xFF << 0));
	printf("value of decodedMessage.longAddr: %X \n",decoderVar.MessageFields.longAddr);

	//extract and save short address:
	//decodedMessage.shortAddr = ((*p >> 29) & (3 << 0));
	printf("value of decodedMessage.shortAddr: %X \n",decoderVar.MessageFields.shortAddr);

	//extract and save addr mode:
	//decodedMessage.addrMode = ((*p >> 31) & (1 << 0));
	printf("value of decodedMessage.addrMode: %X \n",decoderVar.MessageFields.addrMode);


	return decoderVar;

}
