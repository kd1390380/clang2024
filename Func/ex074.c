#include <stdio.h>
void c1(int);
void c2(int*);
int main(void)
{
	int a, b;
	printf("���la?");
	scanf("%d", &a);
	c1(a);
	printf("a=%d\n\n", a);

	printf("\n���lb?");
	scanf("%d", &b);
	c2(&b);
	printf("b=%d", b);
}

void c1(int a)
{
	printf("���la�́A%d�ł��B\n", a);
}

void c2(int *b)
{
	printf("���lb�́A%d�ł��B\n", *b);
}