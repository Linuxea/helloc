/*
 * ScanfTest.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */



#include<stdio.h>

void scanfTest();

int main(void){
	scanfTest();
	return 0;
}


void scanfTest(){
	printf("����������\n");
	float f;
	printf("�뿪ʼ��ı���\n");
	scanf("%f", &f);
	printf("you input is:%f", f);
}
