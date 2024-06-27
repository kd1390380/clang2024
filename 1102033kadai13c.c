#include <stdio.h>
void ab(int*,int*);
int main(void)
{
	int a = 10, b = 20;
	printf("関数実行前の値\na=%d  b=%d", a, b);
	ab(&a, &b);
	printf("\n関数実行後の値\na=%d  b=%d", a, b);
}

void ab(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}