#include <stdio.h>
int main(void)
{
	char c[20] = "mikan to ringo";
	char* pc;
	pc = c;
	printf("�󔒂���菜����������");
	
	while (*pc)
	{
		if (*pc == ' ')
		{
			*pc++;
			continue;
		}
		putchar(*pc++);
	}
}