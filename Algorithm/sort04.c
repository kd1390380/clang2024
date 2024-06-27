#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define KAZU 20000
int main(void)
{
	int d[KAZU], w,gap;
	srand(time(0));
	rand();
	for (int i = 0; i < KAZU; i++)
	{
		d[i] = rand()%1000+1;
	}
	printf("data = ");
	for (int i = 0; i < KAZU; i++)
	{
		printf("%d ", d[i]);
	}

	gap = KAZU / 2;
	while (gap > 0)
	{
		printf("\n\n");
		for (int i = gap; i < KAZU; i++)
		{
			printf("\n-----------");
			for (int j = i - gap; j >= 0; j -= gap)
			{
				printf("\n");
				if (d[j] > d[j + gap])
				{
					puts("ok if");
					printf("[%d]%d [%d]%d\n", j, d[j], j + gap, d[j + gap]);
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
					printf("[%d]%d [%d]%d\n", j, d[j], j + gap, d[j + gap]);
				}
				else
				{
					puts("ok else");
					printf("[%d]%d [%d]%d\n", j, d[j], j + gap, d[j + gap]);
					break;
				}
			}
		}
		gap = gap / 2;
	}

	printf("\nÉ\Å[Égå„=");
	for (int i = 0; i < KAZU; i++)
	{
		printf("%d ",d[i]);
	}
}