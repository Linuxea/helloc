/*
 * Link.c
 *
 *  Created on: 2017��9��14��
 *      Author: linuxea.lin
 */


//����

#include<stdio.h>
#include<string.h>

struct Link{
	char chs[100];
	struct Link * next;
};

void createLink(struct Link *);
void printLink(struct Link * );

int main(void){
	struct Link * linkHead ;
	createLink(linkHead);
	printLink(linkHead);
	return 0;
}


void createLink(struct Link * linkHead){
	struct Link head;
	strcpy(head.chs, "i am a head");

	struct Link next;
	strcpy(next.chs, "i am a head.next");

	struct Link next_next;
	strcpy(next_next.chs, "i am a head.next_next");

	struct Link next_next_next;
	strcpy(next_next_next.chs, "i am a head.next_next_next");

	// �������Ĺ�ϵ
	head.next = &next;
	next.next = &next_next;
	next_next.next = &next_next_next;
	next_next_next.next = NULL;

	linkHead = &head; // ����ͷ��ָ��
//	printf("%s\n", linkHead->chs);
//	printf("%s\n", linkHead->next->chs);
//	printf("%s\n", linkHead->next->next->chs);

}

void printLink(struct Link * temp){
	if(NULL != temp){
		printf("%s ->",temp->chs);
//		printLink(temp->next);
	}
}
