/*
 * Person.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include <stdio.h>
#include <string.h>

struct Person{
	char name[20];
	int age;
	float score;
};

//int main(void){
//
//	struct Person p1; //�о����struct ʵ�ֶ�����е����
////	p1.name = "little sun"; // ����ʱ���Զ��� ���ڲ��� �﷨�涨
//	strcpy( p1.name, "little sun");
//	p1.age = 27;
//	p1.score = 89.45;
//
//	printf("name is:%s\nage is:%d\nscore is %f\n",p1.name, p1.age, p1.score);
//
//	return 0;
//}
