#include <stdio.h>
int main(void)
{
	int a[][3] = { {10,20,30}, {40,50,60} ,{70,80,90} }, i,b;
	int* pa;
	printf("�����(�P�`�R)�F");
	scanf("%d", &b);
	pa = &a[0][b-1];
	printf("2�����z��tbl�̓��e\n");
		for (i = 0; i < 3; i++)
		{
			printf(" %3d", *pa);
			pa++;
			pa++;
			pa++;
		}
}