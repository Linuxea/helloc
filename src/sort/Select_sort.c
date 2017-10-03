/*
 * Select_sort.c
 *
 *  Created on: 2017年10月3日
 *      Author: linuxea
 */

// funny select sort

#include<stdio.h>
#define SIZE 10

void select_sort(int[] ,int );

void select_sort(int arr[] ,int N ){

	for(int i = 0;i<N;i++){
		for(int j = i;j<N;j++){
			if(arr[i] > arr[j]){ // assume arr[i] is the minimum
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

//int main(void){
//
//	int arr[] = {1,3,5,7,9,22,21,-9,0, 63};
//	select_sort(arr, SIZE);
//	for(int i = 0;i<9;i++){
//		printf("%d->", arr[i]);
//	}
//
//	return 0;
//}

