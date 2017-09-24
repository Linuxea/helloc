/*
 * Alls.c
 *
 *  Created on: 2017年9月24日
 *      Author: linuxea
 */


#include<stdio.h>

#define N 4

int used[5];
int result[4];

void printAll(int);

void printAll(int level){
	for(int i=0;i<N;i++){
		if(used[i] == 0){ // 0 表示没有用过
			used[i] = 1;
			result[level] = i;
			printAll(level+1);
			used[i] = 0; // set not used
		}
	}

	if(level == N){
		for(int i = 1;i<N;i++){
			printf("%d->", result[i]);
		}
		printf("\n");
	}
}

//
//int main(void){
//
//	printAll(1);
//	return 0;
//}
