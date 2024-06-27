#include <stdio.h>
void c1(int);
void c2(int*);
int main(void)
{
	int a, b;
	printf("数値a?");
	scanf("%d", &a);
	c1(a);
	printf("a=%d\n\n", a);

	printf("\n数値b?");
	scanf("%d", &b);
	c2(&b);
	printf("b=%d", b);
}

void c1(int a)
{
	printf("数値aは、%dです。\n", a);
}

void c2(int *b)
{
	printf("数値bは、%dです。\n", *b);
}