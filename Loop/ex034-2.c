#include <stdio.h>
int main(void) 
{
	int i ,j;
	printf("”‚ÍH");
	scanf("%d", &i);
	do
	{
		for(j=0;j <= 4; j++)
		{
			printf("*");
		}
		printf("\n\n");
		i--;
	} while (i > 0);
}