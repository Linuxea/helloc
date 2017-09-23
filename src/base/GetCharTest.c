/*
 * GetCharTest.c
 *
 *  Created on: 2017年9月23日
 *      Author: Administrator
 */

// what is getchar

#include<stdio.h>

int main(void){

	char c;
	while(scanf("%c", &c)){
		if(c == 'o')break;
		printf("%c", c);
	}

	return 0;
}
