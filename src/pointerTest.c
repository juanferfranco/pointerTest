/*
 ============================================================================
 Name        : pointerTest.c
 Author      : JuanFranco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void multiplicarPorTresVariable( int *pdata);


int main(void) {

	int variable = 10;

	printf("variable = %d\n", variable);


	int *pvariable = &variable;

	*pvariable = 30;

	printf("variable = %d\n", variable);

	multiplicarPorTresVariable(&variable);

	printf("variable = %d\n", variable);

	printf("variable = %d\n", variable*2);

	return EXIT_SUCCESS;
}

void multiplicarPorTresVariable( int *pdata){

	// *pdata == variable
	*pdata = (*pdata) * 3;
}



