//
// Created by Linux on 2018/6/6.
//

#include "stdio.h"

void check_arrayMemory(int *, int);

//int main(){
//    int arr[] = {1,3,5,7,9, 2,4,1,3413,34,};
//    check_arrayMemory(arr, sizeof(arr)/ sizeof(arr[0]));
//    for(int i = 0;i<sizeof(arr)/ sizeof(arr[0]);i++) {
//        printf("%d\t", *(arr + i));
//    }
//    return 0;
//}


void check_arrayMemory(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(arr + i));
    }

    *(arr + 2) = 99;
    printf("\n");

}