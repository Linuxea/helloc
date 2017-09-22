/*
 * DefindTest.c
 *
 *  Created on: 2017年9月22日
 *      Author: linuxea.lin
 */


// what is define

#include<stdio.h>
#define ok "OK"

int main(void){

#ifdef ok
	printf("ok");
#else
	printf("not ok");
#endif

	return 0;
}
