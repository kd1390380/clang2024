#include <stdio.h>
void ke(int*,int*, int*);
int main(void)
{
	int a[3], b, c;
	for (int i = 0; i < 3; i++)
	{
		printf("data%d?",i + 1);
		scanf("%d", &a[i]);
	}
	ke(&a[0], &b, &c);
	printf("Å‘å’l‚Í%d Å¬’l‚Í%d", a[0],a[2]);
}

void ke(int*a,int*d,int*e)
{
	int w;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0 ; j < 2 - i; j++)
		{
			if (*(a + j) < *(a + (j + 1)))
			{
				w = *(a + j);
				*(a + j) = *(a + (j + 1));
				*(a + (j + 1)) = w;
			}
		}
	}
}