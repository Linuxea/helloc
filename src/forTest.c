/*
 * forTest.c
 *
 *  Created on: 2017��9��13��
 *      Author: linuxea.lin
 */


// for ѭ��

#include<stdio.h>

void forTest();

//int main(void){
//	forTest();
//	return 1;
//}

void forTest(){
	int i,j;
	for(i = 1;i<9;i++){
		for(j = 1;j<9;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
