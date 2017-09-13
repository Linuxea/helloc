/*
 * switchTest.c
 *
 *  Created on: 2017Äê9ÔÂ13ÈÕ
 *      Author: linuxea.lin
 */


#include<stdio.h>

void test2(int);

int main(void){
	test2(2);
	return 1;
}


void test2(int i){
	switch(i){
		case 1:printf("you input is 1!");break;
		case 2:printf("you input is 2!");break;
		case 3:printf("you input is 3!");break;
		case 4:printf("you input is 4!");break;
		case 5:printf("you input is 5!");break;
		default:printf("you input is not in (1,2,3,4,5)");break;
	}
}
