#include <stdio.h>
int main(void)
{
	char c;
	int a, b, i;

	printf("����1?");
	scanf("%d", & a);
;
	printf("����2?");
	scanf("%d", & b);

	printf("���Z�q�����āF");
	scanf("%*c%c", & c);

	switch ( c)
	{
		case(0x2b):
			printf("%d+%d=%d",a,b,a+b);
			break;
		case(0x2d):
			printf("%d-%d=%d",a,b,a-b);
			break;
		case(0x2a):
			printf("%d*%d=%d",a,b,a*b);
			break;
		case(0x2f):
			printf("%d/%d=%f",a,b,(float)a/b);
			break;
		case(0x25):
			printf("%d��%d=%d",a,b,a%b);
			break;
		default:
			printf("�G���[");
	}
}
