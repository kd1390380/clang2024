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
	printf("逆順に表示すると、");
	while (i > 0)
	{
		printf("%c",* pc--);
		i--;
	}
}