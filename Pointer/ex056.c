#include <stdio.h>
int main(void)
{
	int a[][3] = { {10,20,30}, {40,50,60} ,{70,80,90} }, i;
	int* pa;
	pa = a[0];
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i<9; i++)
	{
		printf(" %3d", *pa++);
	}
}