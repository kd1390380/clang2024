#include <stdio.h>
int main(void)
{
	char d;
	int a;

	printf("10�i���̐����H");
	scanf("%d", &a);
	printf("�A���t�@�x�b�g�H");
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