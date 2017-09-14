/*
 * Params.c
 *
 *  Created on: 2017年9月14日
 *      Author: linuxea.lin
 */


// 可变参数
// 这不是一个值得参考的例子


#include<stdio.h>
#include<stdarg.h> //引入这人东东

void paramsTest(int, ...);

int main(void){
	paramsTest(1,2,3,4);
	return 1;
}

void paramsTest(int num, ...){

		va_list valist;
	    double sum = 0.0;
	    int i;

	    /* 为 num 个参数初始化 valist */
	    va_start(valist, num);

	    /* 访问所有赋给 valist 的参数 */
	    for (i = 0; i < num; i++)
	    {
	       sum += va_arg(valist, int);
	    }
	    /* 清理为 valist 保留的内存 */
	    va_end(valist);

	    printf("%d\n",sum);
}
