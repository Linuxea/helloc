/*
 * MallocMemoryTest.c
 *
 *  Created on: 2017年9月14日
 *      Author: linuxea.lin
 */

// 内存分配

// 当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void memoryTest(void);


int main(void){

	memoryTest();

	return 1;
}

void memoryTest(void){

	char *charAddress;
	charAddress = malloc(25);
	printf("%p\n", charAddress); //打印内存地址
	strcat( charAddress, "She is in class 10th");
	printf("%s\n", charAddress);
	strcat(charAddress,"abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"); // out of memory
	printf("%s\n", charAddress);
	free(charAddress);

}
