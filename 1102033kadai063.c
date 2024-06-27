#include <stdio.h>
int main(void) 
{
	int i, j;
	i = 0;
	while(i<2)
	{
		j = 10 * i + 1;
		while(j<= 10*(i+1))
		{
			printf("%d ", j);
			j++;
		}
		printf("\n");
		i++;
	}
}
	