#include <stdio.h>
int main(void)
{
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int  i, j, k;
	int b = 0, c;
	for (i = 0; i <= 1; i++)
	{
		printf("アパート%d ", i + 1);
		for (j = 0; j <= 1; j++)
		{
			printf("(%d階):", j + 1);
			for (k = 0; k <= 2; k++)
			{
				printf("%d ", a[i][j][k]);
				b += a[i][j][k];
			}

		}
		printf("\n\n");
	}
	printf("全体で%d人住んでいます\n\n", b);
}