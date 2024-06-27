#include <stdio.h>
int main(void) {
	int i, a , j;
	for ( i = 0; i <= 2; i++)
	{
		for (j = 1; j <= 20; j++)
		{
			a = (i * 20) + j;
			printf("%d ", a);
		}
		printf("\n");
	}

}