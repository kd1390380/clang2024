#include <stdio.h>
int main(void)
{
	int a, b=0,i=0;
	while (1)
	{
		printf("����(-999�ŏI��)");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		b += a;
		i++;
	}
	printf("���v��%d\n���ρ�%.3f", b, (float)b / i);
}