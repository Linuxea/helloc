//
// Created by Linux on 2018/6/6.
//

// c99 �� c99 ǰ�������ڴ����

#include "stdio.h"
#include "stdlib.h"

void array_malloc_test_before_c99();

void array_malloc_test();

void array_malloc_test_before_c99() {
    int length;
    printf("please input the array length you want\n");
    scanf("%d", &length);
    int *a;
    a = (int *) (malloc(sizeof(int) * length));
    printf("please input the array element you want.\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &a[i]);
    }
    printf("output the element\n");
    for (int i = 0; i < length; i++) {
        printf("%d : %d\n", i, a[i]);
    }

    // �黹�ڴ�
    free(a);
}

void array_malloc_test() {
    int length;
    printf("please input the array length you want\n");
    scanf("%d", &length);
    int a[length];
    for (int i = 0; i < length; i++) {
        scanf("%d", &a[i]);
    }
    printf("output the element\n");
    for (int i = 0; i < length; i++) {
        printf("%d : %d\n", i, a[i]);
    }
}

//int main(){
////    array_malloc_test_before_c99();
////    array_malloc_test();
//    return 1;
//}