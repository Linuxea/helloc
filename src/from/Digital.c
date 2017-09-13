/*
 * Digital.c
 *
 */


// from internet

#include <stdio.h>
#include <string.h>
int main(){
	int bshow[][10] = {
		1, 0, 1, 1, 0, 1, 1, 1, 1, 1,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 1, 1, 0, 1, 1,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		1, 0, 1, 1, 0, 1, 1, 0, 1, 1,
	};
	char str[][11] = {"          ", "----------"};
	char strl[][11] = {"          ", "|   ||| ||", "          ", "| |   | | ", "          "};
	char strr[][11] = {"          ", "|||||  |||", "          ", "|| |||||||", "          "};

	char input[24];
	int n;
	scanf("%d%23s", &n, input);
	int nlen = strlen(input);

	int i;
	int j;
	int iline;

	for(i=0; i<5; ++i)
	{
		int tmp = 1;
		if(i%2)
			tmp = n;
		for(iline=0; iline<tmp; ++iline)
		{
			for(j=0; j<nlen; ++j)
			{
				int index = input[j] - '0';
				printf("%c%.*s%c ", strl[i][index], n, str[bshow[i][index]], strr[i][index]);
			}
			puts("");
		}
	}

	return 0;
}
