/*
 * UnionDemo001.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


// �������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ

#include<stdio.h>
#include<string.h>

void unionTest();

union Data{
	int i;
	float f;
	double d;
	char chars[17];  //������ռ�õ��ڴ�Ӧ�㹻�洢�����������ĳ�Ա
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
