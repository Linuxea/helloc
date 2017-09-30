/*
 * Insert_sort.c
 *
 *  Created on: 2017年10月1日
 *      Author: linuxea
 */


// insert sort

#include<stdio.h>
#define SIZE 4

void insert_sort(int [], int N);

void insert_sort(int arr[], int N){

	int i,j,temp;

	for(i = 1;i<N;i++){
		temp = arr[i]; // temp save
		for(j = i ;j>0 && arr[j-1]>temp; j--){ // warn: j=i  j>0 arr[j-1] > temp
			arr[j] = arr[j-1];
		}
		arr[j] = temp; // until j point
	}

	for(int i = 0;i<SIZE;i++){
		printf("%d -> ", arr[i]);
	}
}

//int main(void){
//
//	int arr[] = {1,0,2,-1};
//	insert_sort(arr, SIZE);
//
//	return 0;
//}
