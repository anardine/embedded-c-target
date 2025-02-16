/*
 * input.c
 *
 *  Created on: Feb 16, 2025
 *      Author: alessandro.nardinelli
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "input.h"

int32_t collectInput(void) {

	int32_t message = 0;
	printf("Enter a 32bit number: \n");
	scanf("%"SCNd32, &message);

	return message;

}
