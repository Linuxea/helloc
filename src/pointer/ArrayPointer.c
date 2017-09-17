/*
 * ArrayPointer.c
 *
 *  Created on: 2017年9月18日
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){

	char *chs[] = {
			"床前明月光",
			"疑是地上霜",
			"举头望明月",
			"低头思故乡"
	};

	int i = 0;

	for(;i<4;i++){
		printf("%s\t",*(chs+i));
	}

	return 0;
}

