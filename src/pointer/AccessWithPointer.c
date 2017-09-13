/*
 * AccessWithPointer.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


#include<stdio.h>

int main(void){
	int * ic;
	int a = 3;

	ic = &a;

	printf("%p\n",ic);
	printf("%x\n",&a);
	printf("通过指针来访问所达内存地址的值%d", *ic);
	return 0;
}
