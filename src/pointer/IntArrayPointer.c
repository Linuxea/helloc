/*
 * IntArrayPointer.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


#include<stdio.h>

int main(void){

	int intArr[5] = {1,2,3,4,5};
	int * ap = intArr; //ָ��ָ������ĵ�һ��Ԫ�� ����ʱ��ô���ɣ�
	int i;

	for(i = 0;i<5;){
		printf("%d\t",ap[i++]);
	}

	return 0;
}
