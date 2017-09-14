/*
 * SwapTwoNum.c
 *
 *  Created on: 2017年9月14日
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
	int temp;    //传递过来的是指针
	temp = *i;	 //所以按照以前交往两个数的思路
	*i = *j;	 //通过取值操作符直接对两个数进行交换
	*j = temp;
}
