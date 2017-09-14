/*
 * Params.c
 *
 *  Created on: 2017��9��14��
 *      Author: linuxea.lin
 */


// �ɱ����
// �ⲻ��һ��ֵ�òο�������


#include<stdio.h>
#include<stdarg.h> //�������˶���

void paramsTest(int, ...);

int main(void){
	paramsTest(1,2,3,4);
	return 1;
}

void paramsTest(int num, ...){

		va_list valist;
	    double sum = 0.0;
	    int i;

	    /* Ϊ num ��������ʼ�� valist */
	    va_start(valist, num);

	    /* �������и��� valist �Ĳ��� */
	    for (i = 0; i < num; i++)
	    {
	       sum += va_arg(valist, int);
	    }
	    /* ����Ϊ valist �������ڴ� */
	    va_end(valist);

	    printf("%d\n",sum);
}
