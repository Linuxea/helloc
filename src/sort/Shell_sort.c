/*
 * Shell_sort.c
 *
 *  Created on: 2017年10月1日
 *      Author: linuxea
 */


// shell sort

#include<stdio.h>

#define SIZE 4

void shell_sort(int [], int N);

void shell_sort(int arr[], int N){

	int k;
	int i,j,temp;

	for(k = N/2;k>0;k/=2){
		for(i = k;i<N;i++){
			temp = arr[i]; // temp save
			for(j = i ;j>=k && arr[j-k]>temp; j-=k){ // warn: j=i  j>0 arr[j-1] > temp
				arr[j] = arr[j-k];
			}
			arr[j] = temp; // until j point
		}
	}

	for(int i = 0;i<SIZE;i++){
		printf("%d -> ", arr[i]);
	}
}

//int main(void){
//
//	int arr[] = {1,0,2,-1};
//	shell_sort(arr, SIZE);
//
//	return 0;
//
//	return 0;
//}






