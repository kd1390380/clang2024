#include <stdio.h>
int main(void)
{
	int a[5][5] = { { 1,2,3,4,5 },
					{6,7,8,9,10},
					{11,12,13,14,15},
					{16,17,18,19,20},
					{21,22,23,24,25} },
		b[5][5] = { {3,6,9,12,15},
					{18,21,24,27,30},
					{33,36,39,42,45},
					{48,51,54,57,60},
					{63,66,69,72,75} };
	int* pa,w,*pb;
	for (int i = 0; i < 5; i++)
	{
		pa = a[i];
		pb = b[i];
		for (int j = 0; j < 5; j++)
		{
			w = *pa;
			*pa = *pb;
			*pb = w;
			*pa++;
			*pb++;
		}
	}
	printf("”z—ña \n ");
	for (int i = 0; i < 5; i++)
	{
		pa = a[i];
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", *pa++);
		}
		printf("\n");
	}
	printf("”z—ñb \n ");
	for (int i = 0; i < 5; i++)
	{
		pb = b[i];
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", *pb++);
		}
		printf("\n");
	}
}