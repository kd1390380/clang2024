#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j;
	printf("•¶š‚ğ“ü—Í");
	scanf(" %s", &a);
	printf("ˆÃ†");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	while(a[i]!='\0')
	{
		a[i] -= 1;
		i++;
	}
	i = 0;
	printf("\n•œ†‰»Œã");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	