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


	decoder(collectInput());

	getchar();
	return EXIT_SUCCESS;
}
