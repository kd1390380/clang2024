#include <stdio.h>
int main(void)
{
	char a[10] = { "Orange" };
	char* pa;
	char* p = "Apple";
	pa = a;
	printf("data[]=");
	while (*pa)
	{
		putchar(*pa++);
	}
	printf("\n*p=");
	while (*p)
	{
		putchar(*p++);
	}
}