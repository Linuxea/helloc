/*
 * Person.c
 *
 *  Created on: 2017年9月13日
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
//	struct Person p1; //感觉这个struct 实现定义得有点多余
////	p1.name = "little sun"; // 声明时可以定义 现在不行 语法规定
//	strcpy( p1.name, "little sun");
//	p1.age = 27;
//	p1.score = 89.45;
//
//	printf("name is:%s\nage is:%d\nscore is %f\n",p1.name, p1.age, p1.score);
//
//	return 0;
//}
