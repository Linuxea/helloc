/*
 * VoidPointer.c
 *
 *  Created on: 2017��9��18��
 *      Author: linuxea.lin
 */

// void ָ��
// ����ָ��

#include<stdio.h>

int main(void){

	void *vv = "abc";
	printf("vv-char[] %s\n", vv);

	int i = 123456;
	vv = &i;
	printf("vv->int %d\n", *((int*)vv)); //double ������

	return 0;
}
