/*
 * static.c
 *
 *  Created on: 2017��9��13��
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
	static int j = 3; //�� java ��һ�µ��ǡ��˴�ӵ�з����� static ����
	while(j>0){
		printf("%d\t",j);
		j--;
	}
}
