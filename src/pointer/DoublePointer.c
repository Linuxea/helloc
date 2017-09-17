/*
 * DoublePointer.c
 *
 *  Created on: 2017年9月18日
 *      Author: Administrator
 */

//指向指针的指针

#include<stdio.h>

int main(void){

	int i = 1;

	int *p = &i;

	int **pp = &p;

	printf("%d\n", **pp);

	return 0;
}

