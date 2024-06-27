#include <stdio.h>
int main(void)
{
	char* pc = "Nippon";
	int i=0;
	while (*pc)
	{
		i++;
		*pc++;
	}
	*pc--;
	printf("‹t‡‚É•\Ž¦‚·‚é‚ÆA");
	while (i > 0)
	{
		printf("%c",* pc--);
		i--;
	}
}