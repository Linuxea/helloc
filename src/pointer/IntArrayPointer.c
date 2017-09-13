/*
 * IntArrayPointer.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


#include<stdio.h>

int main(void){

	int intArr[5] = {1,2,3,4,5};
	int * ap = intArr; //指针指向数组的第一个元素 （暂时这么理解吧）
	int i;

	for(i = 0;i<5;){
		printf("%d\t",ap[i++]);
	}

	return 0;
}
