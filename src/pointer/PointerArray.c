/*
 * PointerArray.c
 *
 *  Created on: 2017��9��18��
 *      Author: linuxea.lin
 */


// ָ������


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
