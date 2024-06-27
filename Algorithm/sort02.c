#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int d[5], w,a,b;
	srand(time(0));
	rand();
	for (int i = 0; i < 5; i++)
	{
		d[i] = rand()%100+1;
	}
	printf("data = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}

	b = 0;
	a = 0;
	int i, j;
	while (a != 4 )
	{
		a = 0;
		printf("\n------------");
		for (i = 0, j = 1; i < 4; i++, j++)
		{
			printf("\n");
			if (d[i] > d[j])
			{
				puts("ok if");
				printf("[%d]%d [%d]%d\n", i, d[i], j, d[j]);
				w = d[i];
				d[i] = d[j];
				d[j] = w;
				printf("[%d]%d [%d]%d\n", i, d[i], j, d[j]);
			}
			else
			{
				puts("ok else");
				printf("[%d]%d [%d]%d\n", i, d[i], j, d[j]);
				a++;
			}
		}
	}

	printf("\nÉ\Å[Égå„=");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",d[i]);
	}
}
