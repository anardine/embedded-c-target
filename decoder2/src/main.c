/*
 ============================================================================
 Name        : decoder2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "input.h"
#include "decoder.h"

int main(void) {


	int32_t collected32bitData = collectInput();

	decoder(collected32bitData);

	getchar();
	return EXIT_SUCCESS;
}
