/*
 * Recursive.c
 *
 *  Created on: 2017年9月20日
 *      Author: Administrator
 */

// 完善解析递归

#include<stdio.h>

void printA(void);

void printA(void){
	char ok;
	scanf("%c", &ok);
	if(ok != '#'){
		printA();
	}
	printf("%c",ok);
}

//int main(void){
//	printA();
//}
