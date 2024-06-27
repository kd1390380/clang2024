#include <stdio.h>
int main(void) {
	int i, j;
	i = 0;
	do
	{
		j = 10 * i + 1;
		do
		{
			printf("%d ", j);
			j++;
		} while (j <= 10 * (i + 1));
		printf("\n");
		i++;
	} while (i < 2);
}
	