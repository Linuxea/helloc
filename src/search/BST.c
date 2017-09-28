/*
 * BST.c
 *
 *  Created on: 2017年9月29日
 *      Author: linuxea
 */


// binary search

#include<stdio.h>

int binarySearch(int[],int);

int binarySearch(int arr[], int k){

	int left = 0;
	int right = 9;// assume the length of array
	int mid;

	while(left <= right){
		mid = (left + right)/2;
		printf("current value is:%d\n", arr[mid]);
		if(k == arr[mid])return mid;
		else if(k > arr[mid]) left = mid + 1;
		else right = mid - 1;
	}

	return -1;

}

int main(void){

	int arr[] = {12,23,45,47,58,69,74,85,99,102};
	int result = binarySearch(arr, 85);
	printf("the result is:%d\n", result);

	return 0;
}







