//
// Created by Linux on 2018/6/7.
//

#include "stdio.h"

void char_array();

void char_array() {
    char chs[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; i < sizeof(chs) / sizeof(chs[0]); i++) {
        printf("%c\t", *(chs + i));
    }

    printf("\n================\n");

    char chs2[] = {'a', 'b', 'c', 'd', 'e', '\0', 'f'};
    for (int i = 0; i < sizeof(chs2) / sizeof(chs2[0]); i++) {
        printf("%c\t", *(chs2 + i));
    }


}

//int main(){
//    char_array();
//    return 1;
//}