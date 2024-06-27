#include <stdio.h>
void ab(int[]);
int main(void)
{
	int a[9] = {10,25,7,45,2,100,3,70,50};
	puts("”z—ñ‚Ì“à—e");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	ab(a);
	printf("\nmax=%d         min=%d", a[0], a[8]);
}

void ab(int a[])
{
	int w;
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (a[i] < a[j])
			{
				w = a[i];
				a[i] = a[j];
				a[j] = w;
			}
		}
	}
}