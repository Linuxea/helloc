/*
 * QuanPaiLie.c
 *
 *  Created on: 2017年9月30日
 *      Author: linuxea
 */


// dfs 构造数组全排列

#include<stdio.h>
#define SIZE 5

void quanPaiLie(int[], int);
int used[SIZE];
int result[SIZE];

void quanPaiLie(int arr[], int level){

	for(int i = 0;i<SIZE;i++){
		if(used[i] == 0){
			used[i] = 1;
			result[level] = arr[i]; //
			quanPaiLie(arr,level+1);
			used[i] = 0;
		}
	}

	if(level == SIZE){
		for(int i = 0;i<SIZE;i++){
			printf("%d->", result[i]);
		}
		printf("\n");
	}
}

//int main(void){
//
//	int arr[] = {1,3,5,7,9};
//	quanPaiLie(arr, 0);
//	return 0;
//}


