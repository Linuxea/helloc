/*
 * DefineTest.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include<stdio.h>

#define ADD(a,b) (a+b); //Ĭ�Ͼ߱�����ָ�����
#define MULTI(a,b) (a*b);
#define DIV(a,b) (a/b);
#define MOK(a,b) (a%b);


void defineTest();

int main(void){

	defineTest();
	return 0;
}


void defineTest(){
	int addResult = ADD(1,2);
	int multiResult = MULTI(1,2);
	int divResult = DIV(1,2);
	int mokResult = MOK(1,2);

	printf("%d\n", addResult);
	printf("%d\n", multiResult);
	printf("%d\n", divResult);
	printf("%d\n", mokResult);
}
