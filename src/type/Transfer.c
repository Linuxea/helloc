/*
 * Transfer.c
 *
 *  Created on: 2017年9月14日
 *      Author: linuxea.lin
 */


// 强制类型转换

#include<stdio.h>

void typeTest();

//int main(void){
//	typeTest();
//	return 0;
//}

void typeTest(void){

	char c = 'a';
	int i = (int)c;
	printf("%d\n", i); // 97

	float f = 9.3f;
	int ii = (int)f;
	printf("%d\n", ii); //  9

	double d = 3.3;
	int iii = (int)d;
	printf("%d\n", iii); //  3

	int iiii = 3;
	printf("%d\n", iiii+'b'); //101


	long l = iiii;
	printf("type up:%lf\n", l);
}
