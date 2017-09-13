/*
 * trueTest.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


//C 语言把任何非零和非空的值假定为 true，把零或 null 假定为 false。

#include<stdio.h>

void test(test);

//int main(void){
//	test();
//	return 0;
//}

void test(){
	if(0){
		printf("error zero.");
	}else{
		printf("good!");
	}
}
