/*
 * FunctionPointer.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


// ����ָ��


#include<stdio.h>

void functionPointerAdd(int,int);

//int main(void){
//
//	void (* p)(int, int) = &functionPointerAdd; // & and be ignored
//	p(1,2);
//
//	return 0;
//}


void functionPointerAdd(int i, int j){
	printf("%d plus %d is %d\n",i, j, i+j);
}
