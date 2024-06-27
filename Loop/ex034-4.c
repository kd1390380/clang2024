#include <stdio.h>
int main(void) 
{
	int i ,j,a,k;
	printf("”‚ÍH");
	scanf("%d", &a);
	i = 0;
	do
	{
		k = 0;
		j = 0;
		do
		{
			printf(" ");
			k++;
		} while (k < a - i);
		do
		{
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < a);
}