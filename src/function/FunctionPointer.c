/*
 * FunctionPointer.c
 *
 *  Created on: 2017��9��15��
 *      Author: linuxea.lin
 */

#include<stdio.h>

void fun(void);
void (*functinPointer)(void);  // ��������ָ�����()��

//int main(void){
//
//	functinPointer = &fun;
//	functinPointer();
//	return 0;
//}


void fun(void){

	printf("hello");

}
