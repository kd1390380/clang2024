#include <stdio.h>
int main(void)
{
	char a[15] = { "Language" },b;
	int i = 0;
	char* pa;
	pa = a;
	printf("data[]=%s\n", pa);
	printf("検索文字は?");
	scanf("%c", &b);
	printf("検索結果は、");
	while (*pa)
	{
		if (*pa == b)
		{
			printf("%d ", i+1);
		}
		pa++;
		i++;
	}
	printf("文字目です");
}