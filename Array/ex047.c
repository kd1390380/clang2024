#include <stdio.h>
int main(void)
{
	float a[3][2];
	int  i, j;
	float b, c;
	for (i = 0; i <= 2; i++)
	{
		b = 0;
		for (j = 0; j <= 1; j++)
		{
			printf("a[%d][%d] = ", i, j );
			scanf("%f", &a[i][j]);
			b += a[i][j];
		}
		c = b / (float)j;
		printf("\n%ds–Ú‚Ì•½‹Ï = %.2f\n\n",i, c);
	}
}