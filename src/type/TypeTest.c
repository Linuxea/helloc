/*
 * TypeTest.c
 *
 *  Created on: 2017Äê9ÔÂ13ÈÕ
 *      Author: linuxea.lin
 */


#include<stdio.h>

typedef int FUCK_INT; //alias
typedef char FUCK_CHAR;
typedef float FUCK_FLOAT;

void typedefTest();

int main(void){

	typedefTest();
	return 0;
}

void typedefTest(){
	FUCK_INT sex = 79;
	FUCK_FLOAT score = 23.3434;
	printf("%d\n", sex);
	printf("%f\n", score);
}
