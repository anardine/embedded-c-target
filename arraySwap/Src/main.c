/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */


#include <stdio.h>
#include <stdint.h>

void swapArrays(int32_t const *arrayAddr[]);
int32_t* fetchArrayFromUser(void);


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{

	int32_t *pToUserArrays = fetchArrayFromUser();

	printf("%p\n", pToUserArrays);
	printf("%p\n", pToUserArrays+1);

	swapArrays(pToUserArrays);

	return 0;

}



int32_t* fetchArrayFromUser(void){

	int n1 = 2;
//	printf("enter the quantity of elements in the first array\n");
//	scanf("%d", &n1);

	int n2 = 2;
//	printf("enter the quantity of elements in the second array\n");
//	scanf("%d", &n2);

	int32_t array1[2] = {1,2};
	int32_t array2[2] = {3,4};

//	for(int i = 0; i < n1; i++){
//		printf("please enter the number for the %d position of the first array", i);
//		scanf("%d", &array1[i]);
//	}

//	for(int i = 0; i < n2; i++){
//		printf("please enter the number for the %d position of the second array", i);
//		scanf("%d", &array2[i]);
//	}

	int32_t *memAddr1 = array1;
	int32_t *memAddr2 = array2;

	int *pToquant1 = &n1;
	int *pToquant2 = &n2;

	int32_t *returnedArray[] = {memAddr1,memAddr2, pToquant1, pToquant2};

	return returnedArray;

}

void swapArrays(int32_t const *arrayAddr[]) {

	int32_t *array1StartOffeset = arrayAddr[0];
	int32_t *array2StartOffeset = arrayAddr[1];

	int32_t array1Size = *arrayAddr[2];
	int32_t array2Size = *arrayAddr[3];

	int32_t newArray1[array2Size];

	for (int32_t i = 0; i< array2Size; i++) {

		newArray1[i] = *array2StartOffeset[i];

	}

	int32_t newArray2[array1Size];

	for (int32_t i = 0; i< array1Size; i++) {
		newArray2[i] = *array1StartOffeset[i];

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
