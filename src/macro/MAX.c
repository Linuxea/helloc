#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))  // 形参前不能有括号

int main(){
    int c = 2;
	  int d = 3;
    printf("max=%d\n", MAX(c, d));
    return 0;
}
