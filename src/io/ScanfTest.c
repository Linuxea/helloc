/*
 * ScanfTest.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */



#include<stdio.h>

void scanfTest();

int main(void){
	scanfTest();
	return 0;
}


void scanfTest(){
	printf("算我求你了\n");
	float f;
	printf("请开始你的表演\n");
	scanf("%f", &f);
	printf("you input is:%f", f);
}
