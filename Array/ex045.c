#include <stdio.h>
int main(void)
{
	int a[2][3]= { {10,20,30}, {1,2,3} };
	int b, i, j;
	for (i = 0; i <= 1; i++)
	{
		b = 0;
		for (j = 0; j <= 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			b += a[i][j];
		}
		printf("\n%ds–Ú‚Ì‡Œv = %d\n\n",i, b);
	}
}