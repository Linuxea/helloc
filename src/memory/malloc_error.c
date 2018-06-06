//
// Created by Linux on 2018/6/6.
//

// 测试可分配内存次数
// 内存如果分配失败返回 NULL 或者 0

#include "stdio.h"
#include "stdlib.h"

void malloc_error();

void malloc_error() {

    // must initial with 0
    long long count = 0;
    void *temp;
    while ((temp = malloc(1024 * 1024 * 100))) {
        // malloc 100mb every time
        count++;
//        free(temp);
    }
    printf("malloc %d times memory\t", count);

}


//int main(){
//    malloc_error();
//}