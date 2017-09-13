/*
 * static.c
 *
 *  Created on: 2017年9月13日
 *      Author: linuxea.lin
 */


#include<stdio.h>

void staticMe(void);

static int i = 0;
//
//int main(){
//	printf("%d",i);
//	staticMe();
//	staticMe();
//	return 0;
//}


void staticMe(){
	static int j = 3; //与 java 不一致的是。此处拥有方法的 static 变量
	while(j>0){
		printf("%d\t",j);
		j--;
	}
}
