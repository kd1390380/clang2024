#include <stdio.h>
int add(int,int);
int main(void) 
{
	int a, b,c;
	printf("2つの整数=");
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("合計は%dです",c);
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}