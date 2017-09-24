/*
 * Alls.c
 *
 *  Created on: 2017年9月24日
 *      Author: linuxea
 */


#include<stdio.h>

#define N 5

int used[5];
int result[4];

void printAll(int);

void printAll(int level){
	for(int i=1;i<=N;i++){
		if(used[i] == 0){ // 0 表示没有用过
			used[i] = 1;
			result[level] = i;
			printAll(level+1);
			used[i] = 0; // set not used
		}
	}

	if(level == N - 1){
		for(int i = 1;i<N;i++){
			printf("%d->", result[i]);
		}
		printf("\n");
	}
}


int main(void){

	printAll(0);
	return 0;
}
