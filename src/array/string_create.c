//
// Created by Linux on 2018/6/7.
//

// 创建一个字符串的三种方式

#include "stdio.h"

void create_string();

void create_string() {
    // array pointer
    char *string = "abcdefg";
    char ch1[50] = "i love chi9na";
    char ch2[] = "i love chi9na plus";

    // print string directly
    printf("%s\t", string);
    printf("%s\t", ch1);
    printf("%s\t", ch2);

    printf("are you kidding me"
                   "are you pie?");

}

//int main(){
//    create_string();
//    return 1;
//}