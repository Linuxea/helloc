/*
 * DfsDemo001.c
 *
 *  Created on: 2017��9��25��
 *      Author: linuxea.lin
 */

// dfs

#include<stdio.h>

int arr[] = {1,34,23,12,9};
int used[5]; // used flag
int result[5];

void dfsPrint(int level);

void dfsPrint(int level){

	for(int i = 1;i<=5;i++){
		if(used[i] == 0){
			used[i] = 1;
			result[level] = i;
			dfsPrint(level+1);
			used[i] = 0;
		}
	}

	if(level == 5){
		for(int i = 0;i<5;i++){
			printf("%d->", result[i]);
		}
	printf("\n");
	}
}

//int main(void){
//
//	dfsPrint(0);
//
//	return 0;
//}
