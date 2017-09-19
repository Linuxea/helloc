/*
 * Stack.c
 *
 *  Created on: 2017年9月19日
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
void destroy(St *st);

void initStack(St * st){
	st->base = (ELEM_TYPE*)malloc(sizeof(ELEM_TYPE) * INIT_SIZE); // malloc 是返回空指针 强制转换
	st->top = st->base;
	st->stack_size = INIT_SIZE;
}
void push(St *st, ELEM_TYPE val){
	if(st == NULL)
		return;
	//是否有空间
	if(st->top - st->base > st->stack_size){
		//重分配
		st->base = (ELEM_TYPE*)realloc(st->base, st.stack_size + (sizeof(ELEM_TYPE) * INCRE_STEP));
		st->base = st->base + st.stack_size;
		st->stack_size += INCRE_STEP;
	}
	*(++st->top) = val;
}

int main(void){

	St *st;
	initStack(st);
	while(1){
		int a;
		scanf("请输入:\n%d", &a);
		push(st,a);
	}
	return 0;
}













