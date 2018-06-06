//
// Created by Linux on 2018/6/6.
//


#include "stdio.h"

int integer_inverse(int);

// 整数的逆表达式
void integer_inverse_method(int a) {
    int digit = 0;
    int ret = 0;
    while (a > 0) {
        digit = a % 10;
        ret = ret * 10 + digit;
        a /= 10;
        printf("%d %d", digit, ret);
        printf("\n");
    }
}

// 整数的正表达式
void integer_method(int a) {
    int digit = 0;
    int ret = 0;
    if (a > 0) {
        digit = a % 10;
        ret = ret * 10 + digit;
        a /= 10;
        integer_method(a);
        printf("%d\t", digit);
    }
}

//int main(){
//    integer_inverse_method(12345);
//    printf("==============\n");
//    integer_method(12345);
//    return 0;
//}
