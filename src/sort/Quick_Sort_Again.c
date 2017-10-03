/*
 * Quick_Sort_Again.c
 *
 *  Created on: 2017年10月3日
 *      Author: linuxea
 */

// quick sort
// has wrong!!

#include<stdio.h>

void quickSortAgain_swap(int*, int*);

void quickSortAgain_swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void quickSortAgain(int[], int, int);

void quickSortAgain(int a[], int left, int right){
	int i = left;
	int j = right;
	int key = a[0]; //stupid

	for(;;){
		while(a[++i]>key);
		while(a[--j]<key);
		if(i<j){
			quickSortAgain_swap(&a[i], &a[j]);
		}
		else break;
	}

	a[i] = key;
	quickSortAgain(a, left, i-1);
	quickSortAgain(a, i+1, right);
}


//int main(void){
//
//	int arr[] = {1,3,5,7,9,22,21,-9,0};
//	quickSortAgain(arr,0,8);
//
//	for(int i = 0;i<9;i++){
//		printf("%d->", arr[i]);
//	}
//
//	printf("over\n");
//	fflush(stdout);
//
//	return 0;
//}
