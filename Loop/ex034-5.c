#include<stdio.h>
int main (void)
{
	int i,a,j;
	printf("”‚ÍH");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) 
	{
		for (j = 1; j <= a - i;j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i*2-1; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= a - 1;i++) 
	{
		for (j = 1; j <= a - (a - i); j++) 
		{
			printf(" ");
		}
		for (j = 1; j <= (a - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}