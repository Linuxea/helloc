/*
 * MallocMemoryTest.c
 *
 *  Created on: 2017��9��14��
 *      Author: linuxea.lin
 */

// �ڴ����

// �������˳�ʱ������ϵͳ���Զ��ͷ����з����������ڴ棬���ǣ��������ڲ���Ҫ�ڴ�ʱ����Ӧ�õ��ú��� free() ���ͷ��ڴ档


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
	charAddress = malloc(65);
	printf("%p\n", charAddress); //��ӡ�ڴ��ַ
	strcat( charAddress, "She is in class 10th");
	printf("%s\n", charAddress);  // ���ַ�ʽֵ����ȶ
	free(charAddress);

}
