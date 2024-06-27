#include <stdio.h>
int main(void)
{
	char d;
	int a;

	printf("10進数の整数？");
	scanf("%d", &a);
	printf("アルファベット？");
	scanf("%*c%c", &d);

	switch (d)
	{
		case(0x4f):
		case(0x6f):
			printf("%o",a);
			break;
		case(0x58):
		case(0x78):
			printf("%x",a);
			break;
		default:
			printf("%d",a);
	}
}