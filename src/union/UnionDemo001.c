/*
 * UnionDemo001.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


// 共用体提供了一种使用相同的内存位置的有效方式

#include<stdio.h>
#include<string.h>

void unionTest();

union Data{
	int i;
	float f;
	double d;
	char chars[17];  //共用体占用的内存应足够存储共用体中最大的成员
} data;

//int main(void){
//
//	unionTest();
//
//	return 0;
//}

void unionTest(){
	data.i = 30;
	strcpy( data.chars, "struct pointer sun");

	printf("%d\n", data.i);
	printf("%f\n", data.f);
	printf("%lf\n", data.d);
	printf("%s\n", data.chars);

	printf("at lease size:%d\n", sizeof(data));
}
