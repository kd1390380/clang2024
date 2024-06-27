#include <stdio.h>
int add(int,int);
int main(void) 
{
	int a, b,c;
	printf("2‚Â‚Ì®”=");
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("‡Œv‚Í%d‚Å‚·",c);
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}