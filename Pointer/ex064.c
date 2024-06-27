#include <stdio.h>
int main(void)
{
	char* p[3] = { "car","bus","shinkansen" };
	while (*p[0])
	{
		putchar(*p[0]++);
	}
	putchar('\n');
	while (*p[1])
	{
		putchar(*p[1]++);
	}
	putchar('\n');
	while (*p[2])
	{
		putchar(*p[2]++);
	}
}