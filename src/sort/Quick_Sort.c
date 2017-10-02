/*
 * Quick_Sort.c
 *
 *  Created on: 2017年10月2日
 *      Author: linuxea
 */

// quick sort
#include<stdio.h>
#define LENGTH 10

void quick_sort(int[], int, int);
void quick_sort_wrap(int[] ,int);

void quick_sort_wrap(int arr[] ,int N){
	quick_sort(arr,0,N-1);

	for(int i = 0;i<LENGTH;i++){
		printf("%d -> ", arr[i]);
	}
}

void quick_sort(int arr[], int left, int right){

	if(left>=right)return;

	int i = left;
	int j = right;
	int key = arr[left]; // pivot

	while(i<j){ // so while

		while(i<j && arr[j]>=key){
			j--;
		}
		arr[i] = arr[j];

		while(i<j && arr[i]<=key){
			i++;
		}
		arr[j] = arr[i];

	}

	arr[i] = key;
	quick_sort(arr, left, i-1);
	quick_sort(arr, j+1, right);

}

int main(void){

	int arr[] = {1,3,5,7,9,2,4,6,8,10};
	quick_sort_wrap(arr, LENGTH);

	return 0;
}

