/*
 * FunctionPointer.c
 *
 *  Created on: 2017��9��15��
 *      Author: linuxea.lin
 */

#include<stdio.h>

void fun(void);
void (*functonPointer)(void);  // ��������ָ�����()��

//int main(void){
//
//	functonPointer = &fun;
//	functonPointer();
//	return 0;
//}


void fun(void){

	printf("hello");

}
