/*
 * BF.c
 *
 *  Created on: 2017年10月2日
 *      Author: linuxea
 */


// string bruce force

#include<stdio.h>
#include<string.h>

int bf(char*, char*);

int bf(char* sub, char* parent){

	int i = strlen(sub);
	int j = strlen(parent);

	int a = 0;
	int b = 0;

	while(a<i && b<j){
		if(sub[a] == parent[b]){
			a++; b++;
		}else{
			a = a-b+1; b = 0; // *****
		}
	}

	if(b>=i)return 1;
	return 0;

}

//int main(void){
//
//	int result = bf("bd","bdefg");
//	printf("pattern result:%d", result);
//	return 0;
//}
