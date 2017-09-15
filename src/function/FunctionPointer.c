/*
 * FunctionPointer.c
 *
 *  Created on: 2017年9月15日
 *      Author: linuxea.lin
 */

#include<stdio.h>

void fun(void);
void (*functinPointer)(void);  // 声明函数指针加上()号

//int main(void){
//
//	functinPointer = &fun;
//	functinPointer();
//	return 0;
//}


void fun(void){

	printf("hello");

}
