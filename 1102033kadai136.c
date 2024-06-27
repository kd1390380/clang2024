#include <stdio.h>
int ab(int, int);
int main(void)
{
	int a, b,c;
	printf("2‚Â‚Ì®”");
	scanf("%d %d", &a, &b);
	c = ab(a, b);
	printf("max=%d", c);
}

int ab(int a, int b)
{
	int z;
	if (a > b)
	{
		z = a;
	}
	else
	{
		z = b;
	}
	return z;
}