/*
 * BubbleSort.c
 *
 *  Created on: 2017年10月1日
 *      Author: linuxea
 */


// bubble sort

#include<stdio.h>
#define SIZE 11

void bubble_sort(int [], int);
void swap(int*, int*);
void printArr(int[], int);

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[], int N){

	int flag;
	for(int i = 0;i < N - 1 ;i++){
		flag = 0;
		for(int j = 0;j < N - 1 - i;j++){
			if(arr[j] > arr[j+1]){
				flag = 1;
				swap(&arr[j], &arr[j+1]);
			}
		}
		if(flag == 0)break;
	}

}

void printArr(int arr[], int N){
	for(int i = 0;i<N;i++){
		printf("%d -> ", arr[i]);
	}
}

//int main(void){
//
//	int arr[] = {1,3,5,7,9,2,4,6,8,10,-9};
//	bubble_sort(arr, SIZE);
//	printArr(arr, SIZE);
//	return 0;
//}






