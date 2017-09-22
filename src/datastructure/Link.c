
//����

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Link{
	char chs[100];
	struct Link * next;
};

struct Link * createLink();
void printLink(struct Link * );

//int main(void){
//	struct Link * linkHead = createLink();
//	printLink(linkHead);
//	free(linkHead); //�ͷ����ݵȲ���  �����ڵ�����
//	return 0;
//}


struct Link * createLink(){

	struct Link * head = malloc(sizeof(struct Link));
	strcpy(head->chs, "i am a head");

	struct Link* next = malloc(sizeof(struct Link));
	strcpy(next->chs, "i am a head.next");

	struct Link * next_next = malloc(sizeof(struct Link));
	strcpy(next_next->chs, "i am a head.next_next");

	struct Link * next_next_next = malloc(sizeof(struct Link));
	strcpy(next_next_next->chs, "i am a head.next_next_next");

	// �������Ĺ�ϵ
	head->next = next;
	next->next = next_next;
	next_next->next = next_next_next;
	next_next_next->next = NULL;

	return head;
}

void printLink(struct Link * temp){
	if(NULL != temp){
		printf("%s ->",temp->chs);
		temp = temp->next;
		printLink(temp);
	}
}
