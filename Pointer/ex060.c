#include <stdio.h>
int main(void)
{
	char a[15] = { "Language" },b;
	int i = 0;
	char* pa;
	pa = a;
	printf("data[]=%s\n", pa);
	printf("����������?");
	scanf("%c", &b);
	printf("�������ʂ́A");
	while (*pa)
	{
		if (*pa == b)
		{
			printf("%d ", i+1);
		}
		pa++;
		i++;
	}
	printf("�����ڂł�");
}