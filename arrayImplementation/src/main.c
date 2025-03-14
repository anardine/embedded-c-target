/*
 * main.c
 *
 *  Created on: Mar 4, 2025
 *      Author: alessandro.nardinelli
 */


#include <stdio.h>
#include <stdint.h>

void swapArrays(int32_t const *arrayAddr);
int32_t* fetchArrayFromUser(void);


int main(void) {

	int32_t *pToUserArrays = fetchArrayFromUser();

	printf("%p\n", pToUserArrays);
	printf("%p\n", pToUserArrays+1);

	swapArrays(pToUserArrays);

	return 0;
}


int32_t* fetchArrayFromUser(void){

	int32_t n1;
	printf("enter the quantity of elements in the first array\n");
	scanf("%d", &n1);

	int32_t n2;
	printf("enter the quantity of elements in the second array\n");
	scanf("%d", &n2);

	int32_t array1[n1];
	int32_t array2[n2];

	for(int32_t i = 0; i < n1; i++){
		printf("please enter the number for the %d position of the first array", i);
		scanf("%d", &array1[i]);
	}

	for(int32_t i = 0; i < n2; i++){
		printf("please enter the number for the %d position of the second array", i);
		scanf("%d", &array2[i]);
	}

	int32_t *memAddr1 = (int32_t*) &array1;
	int32_t *memAddr2 = (int32_t*) &array2;

	int32_t *pToquant1 = &n1;
	int32_t *pToquant2 = &n2;

	int32_t returnedArray[] = {*memAddr1, *memAddr2, *pToquant1, *pToquant2};

	return (int32_t*) returnedArray;

}


void swapArrays(int32_t const *arrayAddr) {

	int32_t *array1StartOffeset = arrayAddr;
	int32_t *array2StartOffeset = arrayAddr+1;

	int32_t array1Size = *(arrayAddr+2);
	int32_t array2Size = *(arrayAddr+3);

	int32_t newArray1[array2Size];

	for (int32_t i = 0; i< array2Size; i++) {

		newArray1[i] = array2StartOffeset[i];

	}

	int32_t newArray2[array1Size];

	for (int32_t i = 0; i< array1Size; i++) {

		newArray2[i] = array1StartOffeset[i];

	}

	printf("the new elements of array one are:");
	for (int32_t i = 0; i< array2Size; i++) {

		printf("%d\t",newArray1[i]);

	}

	printf("the new elements of array two are:");
	for (int32_t i = 0; i< array1Size; i++) {

		printf("%d\t",newArray2[i]);

	}

}
