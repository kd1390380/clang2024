#include <stdio.h>
void ab(int[]);
int main(void)
{
	int a[8] = {6,10,8,2,9,5,1,7};
	ab(a);
	printf("Å‘å’l=%d\nÅ¬’l=%d",a[0],a[7]);
}


void ab(int a[])
{
	int w;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				w = a[j];
				a[j] = a[j + 1];
				a[j + 1] = w;
			}
		}
	}
}