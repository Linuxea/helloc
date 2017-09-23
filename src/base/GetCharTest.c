/*
 * GetCharTest.c
 *
 *  Created on: 2017年9月23日
 *      Author: linuxea
 */


#include<stdio.h>

int main(void){

	// input limit ten chars
	int i = 0;
	while(putchar(getchar()) && ++i<10); // will continue forever because wrap is not a invalid return value

	return 0;
}

