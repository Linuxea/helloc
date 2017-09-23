/*
 * FileCopy.c
 *
 *  Created on: 2017年9月24日
 *      Author: linuxea
 */


// copy file from source to to

#include<stdio.h>


int main(void){

	char * source = "C:\\Users\\Administrator.SKY-20170312TVX\\Desktop\\demo1.txt";
	char * to = "C:\\Users\\Administrator.SKY-20170312TVX\\Desktop\\demo2.txt";

	FILE *fp = fopen(source,"r"); // mode is read. other: a append w write
	FILE *fp2 = fopen(to,"w");

	int temp;
	while((temp = getc(fp)) != EOF && putc(temp, fp2)); // i fell it's unnecessary to judge if it is EOF

	return 0;
}

