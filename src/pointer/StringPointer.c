/*
 * StringPointer.c
 *
 *  Created on: 2017年9月18日
 *      Author: linuxea.lin
 */


// string pointer == char[]
// 字符数组指针

#include<stdio.h>

int main(void){

	char *ch = "I love china"; //指向第一个字符地址的指针  所以不需要声明定义一个数组指针
	printf("%s\n", ch);

	return 0;
}
