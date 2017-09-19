/*
 * Stack.c
 *
 *  Created on: 2017ï¿½ï¿½9ï¿½ï¿½19ï¿½ï¿½
 *      Author: linuxea.lin
 */

// what the hell with stack

#include<stdio.h>
#include<malloc.h>
#include<memory.h>

#define INIT_SIZE 20
#define INCRE_STEP 10

typedef int ELEM_TYPE;

typedef struct Stack{
	ELEM_TYPE * base;// base address
	ELEM_TYPE * top; // top address
	int stack_size;
} St;

void initStack(St * st);
void push(St *st, ELEM_TYPE val);
void post(St *st, ELEM_TYPE *val);
void getLen(St *st);
void clear(St *st);
void stackPrint(St *st);
void destroy(St *st);

void initStack(St * st){
	st->base = (ELEM_TYPE*)malloc(sizeof(ELEM_TYPE) * INIT_SIZE); // malloc ï¿½Ç·ï¿½ï¿½Ø¿ï¿½Ö¸ï¿½ï¿½ Ç¿ï¿½ï¿½×ªï¿½ï¿½
	st->top = st->base;
	st->stack_size = INIT_SIZE;
}
void push(St *st, ELEM_TYPE val){
	if(st == NULL)
		return;
	if(st->top - st->base > st->stack_size){
		st->base = (ELEM_TYPE*)realloc(st->base, st->stack_size + (sizeof(ELEM_TYPE) * INCRE_STEP));
		st->base = st->base + st->stack_size;
		st->stack_size += INCRE_STEP;
	}
	*(++st->top) = val;
}

void stackPrint(St *st){
	while(1){
		if(st->base >= st->top){
			break;
		}
		int current = *(st->base++);
		printf("%d\t", current);
	}
}

int main(void){

	St *st = (St *)malloc(st->stack_size);
	initStack(st);
	while(1){
		int a;
		scanf("ÇëÊäÈë:\n%d", &a);
		push(st,a);
//		stackPrint(st);
	}
	return 0;
}













