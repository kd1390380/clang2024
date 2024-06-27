#include <stdio.h>
int main(void)
{
	int c;
	char a[256];

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(a);
		c = getchar();
	}
}