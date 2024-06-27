#include <stdio.h>
void ab(int);
int main(void)
{
	int a;
	printf("®”");
	scanf("%d", &a);
	ab(a);
}

void ab(int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("*");
	}
}