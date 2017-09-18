/*
 * FunctionParameterIsPointer.c
 *
 *  Created on: 2017��9��18��
 *      Author: linuxea.lin
 */


// ����Ϊָ��ĺ���
// ��������ָ��

#include<stdio.h>

int aadd(int,int);
int sub(int, int);

int aadd(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int cal(int (*op)(int,int),int,int);

int cal(int (*op)(int,int),int x,int y){
	return (*op)(x,y);
}

int main(void){

	printf("1 with 2 add is:%d\n", cal(aadd,1,2));
	printf("1 with 2 sub is:%d\n", cal(sub,1,2));
	return 0;
}
