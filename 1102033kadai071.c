#include <stdio.h>
int main(void)
{
	char c;
	int a, b, i;

	printf("整数1?");
	scanf("%d", & a);
;
	printf("整数2?");
	scanf("%d", & b);

	printf("演算子を入れて：");
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
			printf("%d％%d=%d",a,b,a%b);
			break;
		default:
			printf("エラー");
	}
}
