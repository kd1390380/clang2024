#include <stdio.h>
int main(void) {
	char j ,a ;
	int i;
	for ( i = 0 ; i < 10; i++)
	{
		for (j = 32; j < 42; j++)
		{
			if((i*10)+j <= 126)
			{
				a = (i * 10) + j;
				printf("%X %c", a, a);
			}
		}
		printf("\n");
	}

}