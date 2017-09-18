/*
 * PointerArray.c
 *
 *  Created on: 2017年9月18日
 *      Author: linuxea.lin
 */


// 指针数组


#include<stdio.h>

int main(void){

	char *(arr[]) = {
			"abcd",
			"efg",
			"ijilmn",
			"opqrst"
	};

	for(int i = 0;i<4;i++){
		printf("%s\t", *(arr+i));
	}

	return 0;
}
