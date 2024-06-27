#include <stdio.h>
int main(void)
{
	char a[15] = { "Language" },b;
	int i = 0;
	char* pa;
	pa = a;
	printf("data[]=%s\n", pa);
	printf("ŒŸõ•¶š‚Í?");
	scanf("%c", &b);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	while (*pa)
	{
		if (*pa == b)
		{
			printf("%d ", i+1);
		}
		pa++;
		i++;
	}
	printf("•¶š–Ú‚Å‚·");
}