#include <stdio.h>
int main(void)
{
	char c[50];
	char* pc;
	int i = 0;
	pc = c;
	printf("文字列=");
	scanf("%[^\n]%*c", pc);
	while (*pc)
	{
		if (*pc == ' ')
		{
			i++;
			*pc++;
			continue;
		}
		i++;
		*pc++;
	}
	printf("入力された文字列は%d文字です", i);
}