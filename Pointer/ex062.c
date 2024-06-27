#include <stdio.h>
int main(void)
{
	char* p = "peach";
	char a[10] = "banana", * pa;
	char b[10], * pb;
	pa = a;
	pb = b;
	while (*pb++ = *pa++);
	pa = a;
	while (*pa++ = *p++);
	printf("data1[]=");
	pa = a;
	while (*pa)
	{
		putchar(*pa++);
	}
	printf("\ndata2[]=");
	pb = b;
	while (*pb)
	{
		putchar(*pb++);
	}
}