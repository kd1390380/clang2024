#include <stdio.h>
int main(void) {
	int i, j;
	i = 2;
	do
	{
		j = 10 * i;
		do
		{
			printf("%d ", j);
			j--;
		} while (j > 10 * (i - 1));
		printf("\n");
		i--;
	} while (i > 0);
}
	