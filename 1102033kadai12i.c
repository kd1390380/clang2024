#include <stdio.h>
int main(void)
{
	char c[11] = "mikan";
	char a[11];
	char* pc, * pa;
	pc = c;
	pa = a;
	while (*pa++ = *pc++);
	printf("�R�s�[��̕�����");
	pa = a;
	while (*pa)
	{
		putchar(*pa++);
	}
}