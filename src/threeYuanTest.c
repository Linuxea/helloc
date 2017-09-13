/*
 * threeYuanTest.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


// 三元运算符

#include<stdio.h>

void switchTest(int);

//int main(void){
//	int b = 0;
//	switchTest(b);
//	return 1;
//}

void switchTest(int i){
	printf("%d",i>0?i:-99);
}
