/*
 * FileTest.c
 *
 *  Created on: 2017Äê9ÔÂ14ÈÕ
 *      Author: linuxea.lin
 */



#include<stdio.h>

void openFileTest();

//int main(){
//	openFileTest();
//	return 0;
//}


void openFileTest(){
	FILE *fp = NULL;
	fp = fopen("C:\\Users\\linuxea.lin\\Desktop\\now3.txt","a+");
	fputs("do you remember the other side of DaMing Lake?", fp);
	fclose(fp);
}
