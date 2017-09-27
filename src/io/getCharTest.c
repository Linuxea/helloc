/*
 * getCharTest.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include<stdio.h>

void getCharTest();


//int main(void){
//	printf("hello\n");
//	getCharTest();
//	getchar();
//	return 0;
//}

void getCharTest(){

	int c;

	c = getchar();

	printf("you input is");

	putchar(c);
}
