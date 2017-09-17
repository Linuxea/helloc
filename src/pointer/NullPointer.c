/*
 * NullPointer.c
 *
 *  Created on: 2017年9月17日
 *      Author: Administrator
 */


//wild pointer

#include<stdio.h>

int main(void){

	int * i = NULL;
	int * cr ;

	printf("i:%p, cr:%p\n", i, cr);
//	printf("i:%d\n", *i);  // 指针 i 指向 NULL.直接打印会出错 编译器强制？很有可能
	printf("cr:%d\n", *cr);

	return 0;
}
