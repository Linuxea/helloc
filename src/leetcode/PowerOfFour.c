/*
 * PowerOfFour.c
 *
 *  Created on: 2017年9月22日
 *      Author: linuxea.lin
 */


/*
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example:
Given num = 16, return true. Given num = 5, return false.

Follow up: Could you solve it without loops/recursion?*/


// fail reason : 超时 类似最大子序列和

#include<stdio.h>
#include<math.h>

#define BASE_NUM 4

typedef int bool;
#define TRUE 1
#define FALSE 0

bool isPowerOfFour(int i);

bool isPowerOfFour(int num) {
	num = sqrt(num);
    bool RESULT = FALSE;
    long sum = 1;
    int k;
    for(int j = 0;j <= num; j++){
//    	printf("now j is:%d\n",j);
    	k = sum;
    	for(;k<=j;k++){
//    		printf("now k is:%d\n",k);
    		sum *= 4;
//			printf("now result is:%d\n",sum);
			if(sum == num){
				RESULT = TRUE;
				break;
			}
    	}

//    	printf("\n");

	}

    return RESULT;
}

int main(void){
	printf("%d\n", sqrt(1));
	printf("%d\t", isPowerOfFour(1162261466));
}
