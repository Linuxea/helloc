/*
 * VoidPointer.c
 *
 *  Created on: 2017年9月18日
 *      Author: linuxea.lin
 */

// void 指针
// 万能指针

#include<stdio.h>

int main(void){

	void *vv = "abc";
	printf("vv-char[] %s\n", vv);

	int i = 123456;
	vv = &i;
	printf("vv->int %d\n", *((int*)vv)); //double 解引用

	return 0;
}
