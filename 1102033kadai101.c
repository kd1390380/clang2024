#include <stdio.h>
int main(void)
{
	int a[5][5] = { {1,2,3,4,5}, {6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int  i, j;
	float b, c;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}