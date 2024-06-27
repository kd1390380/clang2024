#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int d[5], w;
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
	for (int i = 0; i < 4; i++)
	{
		printf("\n");
		for (int j = i + 1; j < 5; j++)
		{
			printf("[%d]%d [%d]%d\n", i, d[i], j, d[j]);
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
			printf("[%d]%d [%d]%d\n\n", i, d[i], j, d[j]);
		}
	}
	printf("\nÉ\Å[Égå„=");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",d[i]);
	}
}
