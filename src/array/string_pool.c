//
// Created by Linux on 2018/6/7.
//


#include "stdio.h"

void string_pool();

void string_pool() {
    char *ch1 = "I love you";
    char *ch2 = "I love you";

    // print address
    printf("%s pointer address is %p\n", ch1, ch1);
    printf("%s pointer address is %p\n", ch2, ch2);
    // according to output two string has same address
//    I love you pointer address is 0x40a4c4
//    I love you pointer address is 0x40a4c4

    // 地址小  程序代码段
}

int main() {
    string_pool();
    return 1;
}

