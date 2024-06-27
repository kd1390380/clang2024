#include <stdio.h>
int main(void) 
{
	int i ,j,a;
	printf("”‚ÍH");
	scanf("%d", &a);
	i = 0;
	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < a);
}