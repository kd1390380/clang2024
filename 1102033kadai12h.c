#include <stdio.h>
int main(void)
{
	char c[] = "kadai12h.c";
	char* pc;
	pc = c;
	printf("�z����e ��");
	while (*pc)
	{
		putchar(*pc++);
	}
}