/*
 * AccessWithPointer.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include<stdio.h>

int main(void){
	int * ic;
	int a = 3;

	ic = &a;

	printf("%p\n",ic);
	printf("%x\n",&a);
	printf("ͨ��ָ�������������ڴ��ַ��ֵ%d", *ic);
	return 0;
}
