/*
 * StructPointer.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


// �ṹָ��


#include<stdio.h>
#include<string.h>

struct Student{
	char name[20];
	int age;
	float score;
} stu;

void structPointerTest();

//int main(void){
//
//	structPointerTest();
//
//	return 0;
//}


void structPointerTest(){
	struct Student * point = &stu; // ����ṹָ��

	strcpy( stu.name, "struct pointer sun");
	stu.age = 20;
	stu.score = 89.7;

	printf("name is:%s\nage is:%d\nscore is %f\n",point->name, point->age, point->score);

}
