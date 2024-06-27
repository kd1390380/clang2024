#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define KAZU 20000
int main(void)
{
	int d[KAZU], w,a,b;
	srand(time(0));
	rand();
	for (int i = 0; i < KAZU; i++)
	{
		d[i] = rand()%100+1;
	}
	printf("data = ");
	for (int i = 0; i < KAZU; i++)
	{
		printf("%d ", d[i]);
	}

	for (int i = 0; i < KAZU-1; i++)
	{
		printf("\n-----------");
		for (int j = 1 + i; j > 0; j--)
		{
			printf("\n");
			if (d[j] < d[j - 1])
			{
				puts("ok if");
				printf("[%d]%d [%d]%d\n", j, d[j], j-1, d[j-1]);
				w = d[j];
				d[j] = d[j-1];
				d[j-1] = w;
				printf("[%d]%d [%d]%d\n", j, d[j], j - 1, d[j - 1]);
			}
			else
			{
				puts("ok else");
				printf("[%d]%d [%d]%d\n", j, d[j], j - 1, d[j - 1]);
				break;
			}
		}
	}

	printf("\nƒ\[ƒgŒã=");
	for (int i = 0; i < KAZU; i++)
	{
		printf("%d ",d[i]);
	}
}