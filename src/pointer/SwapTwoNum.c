/*
 * SwapTwoNum.c
 *
 *  Created on: 2017��9��14��
 *      Author: linuxea.lin
 */


// swap two nums

#include<stdio.h>

void swapMe_fail(int, int);
void swapMe_ok(int *, int *);

int main(void){

	int i = 1,j = 2;
	swapMe_ok(&i, &j);
	printf("i is %d, and j is %d\n", i,j);
	return 0;
}

void swapMe_fail(int i, int j){
	int a = i;
	i = j;
	j = a;
}

/**
 * swap two memory address
 */
void swapMe_ok(int *i, int *j){
	int temp;    //���ݹ�������ָ��
	temp = *i;	 //���԰�����ǰ������������˼·
	*i = *j;	 //ͨ��ȡֵ������ֱ�Ӷ����������н���
	*j = temp;
}
