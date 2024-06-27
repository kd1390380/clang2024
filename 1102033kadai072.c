#include <stdio.h>
int main(void)
{
	char d;

	printf("アルファベット？");
	scanf("%c", &d);

	switch (d)
	{
		case(0x41):
		case(0x61):
			printf("America\nAustralia");
			break;
		case(0x45):
		case(0x65):
			printf("England");
			break;
		case(0x46):
		case(0x66):
			printf("France");
			break;
		case(0x4a):
		case(0x6a):
			printf("Japan");
			break;
		default:
			printf("エラー");
	}
}