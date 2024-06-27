#include <stdio.h>
void error_msg(void);
int main(void)
{
	int a,b;
	printf("data1 data2?");
	scanf("%d %d", &a,&b);
	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d/%d=%d......%d", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("0‚Å‚ÍŠ„‚ê‚Ü‚¹‚ñ");
}