#include <stdio.h>
void ab(int*,int*);
int main(void)
{
	int a = 10, b = 20;
	printf("�֐����s�O�̒l\na=%d  b=%d", a, b);
	ab(&a, &b);
	printf("\n�֐����s��̒l\na=%d  b=%d", a, b);
}

void ab(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}