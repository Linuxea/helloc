//
// Created by Linux on 2018/6/6.
//

#include "stdio.h"

void giveValTest() {
    // because of
    int i, j;
    i = j = 3;
    // is equals i = (j = 3)
    // so we conclude that j = 3 return 3
    // test
    int a;
    printf("%d", a = 3);
}

int main() {
    giveValTest();
}