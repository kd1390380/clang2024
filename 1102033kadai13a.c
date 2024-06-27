#include <stdio.h>
long ab(int,int);
int main(void)
{
	int a,b;
	long c;
	printf("®”1:");
	scanf("%d", &a);
	printf("®”2:");
	scanf("%d", &b);
	
	c=ab(a,b);
	printf("%d‚Ì%dæ‚ÍA%d‚Å‚·", a, b, c);
}

long ab(int a,int b)
{
	long c=1;
	for (int i = 0; i < b; i++)
	{
		c *= a;
	}
	return c;
}