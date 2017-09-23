/*
 * GetCharTest.c
 *
 *  Created on: 2017年9月23日
 *      Author: Administrator
 */

// what is getchar
// scanf can only read on char
// but while true can read the chars you input one by one
// so you can type many chars

#include<stdio.h>

int main(void){

	char c;
	while(scanf("%c", &c)){
		if(c == 'o')break;
		printf("%c", c);
	}

	return 0;
}
