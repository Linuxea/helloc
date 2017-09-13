/*
 * sizeOfTest.c
 *
 *  Created on: 2017Äê9ÔÂ13ÈÕ
 *      Author: linuxea.lin
 */


#include<stdio.h>

int main(void){
	int i;
	float f;
	short s;
	double d;
	char c;
	char * cc;

	printf("%d\n",sizeof(i)); // 4
	printf("%d\n",sizeof(f)); // 4
	printf("%d\n",sizeof(s)); // 2
	printf("%d\n",sizeof(d)); // 8
	printf("%d\n",sizeof(c)); // 1
	printf("%d\n",sizeof(cc)); // 4
	return 1;
}
