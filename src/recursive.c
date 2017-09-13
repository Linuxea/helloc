/*
 * recursive.c
 *
 *  Created on: 2017Äê9ÔÂ13ÈÕ
 *      Author: linuxea.lin
 */

#include<stdio.h>

int stepMulit(int);

//int main(void){
//
//	int result;
//	result = stepMulit(20);
//	printf("%d\n", result);
//
//	return 0;
//}

int stepMulit(int i){
	if(i == 1)
		return 1;
	return stepMulit(i-1) * i;
}
