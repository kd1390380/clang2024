#include <stdio.h>
int main(void) {
	int i, j;
	i = 2;
	while(i>0)
	{
		j = 10 * i;
		while(j>10*(i -1 ))
		{
			printf("%d ", j);
			j--;
		}
		printf("\n");
		i--;
	} 
}
	