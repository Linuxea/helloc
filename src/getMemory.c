//
// Created by Linux on 2018/6/6.
//

#include "stdio.h"

void get_memory();

//int main(){
//    get_memory();
//    return 1;
//}

void get_memory() {
    int i = 199;
    printf("%d\n", i);
    printf("%p\n", &i);

    int *j = &i;
    printf("%d\n", *j);
    printf("%p\n", &j);

    i = 1234;
    printf("i = %d\t", i);
    printf("j = %d\t", *j);


    *j = 4321;
    printf("i = %d\t", i);
    printf("j = %d\t", *j);

}