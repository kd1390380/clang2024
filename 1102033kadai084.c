#include <stdio.h>
int main(void)
{
	int a, b=0,i=0;
	while (1)
	{
		printf("����1(-999�ŏI��)?");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		printf("����2(-999�ŏI��)?");
		scanf("%d", &b);
		if (b == -999)
		{
			break;
		}
		if (b == 0)
		{
			continue;
		}
		printf("%d/%d=%d���܂�%d\n", a, b, a / b, a % b);
	}
}