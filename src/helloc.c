/*
 ============================================================================
 Name        : helloc.c
 Author      : linuxea
 Version     :
 Copyright   : nolicense
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <float.h>

int main()
{
   int i = 0;
   int j = 1;

   for(;i<j;i++,j++){
	   if(i == 100)
		   break;
	   printf("%d\n",i);
   }
}
