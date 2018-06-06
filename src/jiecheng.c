//
// Created by Linux on 2018/6/6.
//

// Çó!

#include "stdio.h"

int jie(int);

int jie(int a) {
    int i = 1;
    for (; a > 0;) {
        i *= a--;
    }
    printf("%d", i);
}
