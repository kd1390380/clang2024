#include <stdio.h>
int main(void)
{
	char a[15] = { "C Language" }, b[15];
	char* pa, * pb;
	pa = a;
	pb = b;
	printf("data[]=%s\n",pa);
	while (*pb++ = *pa++);
	pb = b;
	printf("data2[]=%s\n", pb);
	while (*pb)
	{
		putchar(*pb++);
	}
	printf("\n");
}