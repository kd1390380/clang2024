#include <stdio.h>
int main(void)
{
	int a[5][5] = { { 1,2,3,4,5 },
					{6,7,8,9,10},
					{11,12,13,14,15},
					{16,17,18,19,20},
					{21,22,23,24,25} },
		c[5][5];
	int* pa,*pc;
	for (int i = 4; i >=0; i--)
	{
		pa = a[i];
		for (int j = 0; j < 4; j++)
		{
			*pa++;
		}
		pc = c[4-i];
		for (int j = 0; j < 5; j++)
		{
			*pc = *pa--;
			*pc++;
		}
	}
	printf("”z—ñc \n ");
	for (int i = 0; i < 5; i++)
	{
		pc = c[i];
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", *pc++);
		}
		printf("\n");
	}
}