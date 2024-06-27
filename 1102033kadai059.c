#include <stdio.h>
int main(void) {
	char j ,a ;
	int i;
	printf("1 2 3 4 5 6 7 8 9\n==================\n");
	for ( i = 1 ; i < 10; i++)
	{
		printf("%d|",i);
		for (j = 1; j < 10; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}

}