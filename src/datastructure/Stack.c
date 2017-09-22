/*
 * Stack.c
 *
 *      Author: linuxea.lin
 */

// what the hell with stack

#include<stdio.h>
#include<malloc.h>
#include<memory.h>

#define INIT_SIZE 3
#define INCRE_STEP 2

typedef int ELEM_TYPE;

typedef struct Stack{
	ELEM_TYPE * base;// base address
	ELEM_TYPE * top; // top address
	int stack_size;
} St;

void initStack(St * st);
void push(St *st, ELEM_TYPE val);
void stackPrint(St *st);
//void post(St *st, ELEM_TYPE *val);
//void getLen(St *st);
//void clear(St *st);
//void destroy(St *st);

void initStack(St * st){
	st->base = (ELEM_TYPE*)malloc(sizeof(ELEM_TYPE) * INIT_SIZE); // malloc
	st->top = st->base;
	st->stack_size = 0;
}
void push(St *st, ELEM_TYPE val){
	if(st == NULL)
		return;
	if(st->top - st->base >= INIT_SIZE){
		st->base = (ELEM_TYPE*)realloc(st->base,  (sizeof(ELEM_TYPE) * (INCRE_STEP +st->stack_size)));
		st->base = st->base + sizeof(ELEM_TYPE) * (INCRE_STEP +st->stack_size);
		st->stack_size += INCRE_STEP;
	}
	st->stack_size ++;
	*(st->top++) = val;
}

void stackPrint(St *st){
	printf("\n");
	for(int i = 0;i<st->stack_size;i++){
		int current = *(st->base++);
		printf("%d->", current);
	}

	printf("\n");
}

int main(void){

	St *st;
	initStack(st);
	while(1){
		int a;
		scanf("%d", &a);
		if(a>0){
			push(st,a);
		}else{
			break;
		}
	}

	stackPrint(st);

	return 0;
}
