/*
 * IntPointerTest.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include<stdio.h>

void int2Test();
void int3Test();

//int main(void){
//
//	int2Test();
//	int3Test();
//	return 0;
//}

void int2Test(){

	int * p;
	int a = 99;
	p = &a;
	printf("%p\t", p);
}

void int3Test(){
	int a = 3;
	int *pointer = &a; //* ָ�붨���  & ȡַ������
	printf("%p\t", pointer);
}
