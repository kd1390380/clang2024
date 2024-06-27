#include <stdio.h>
#include<string.h>
int main(int a,char*b[])
{
	printf("argc=%d\n", a);
	for (int i = 0; i < 3; i++)
	{
		printf("*argv[%d]=%s\n", i, b[i]);
	}
}


