#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j,b;
	printf("ˆÃ†•¶š‚ğ“ü—Í");
	scanf(" %s", &a);
	printf("ˆÃ†");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	j = 0;
	printf("\n");
	while(a[i]!='\0')
	{
		printf("a[%d]‚Ì•œ†‰»ƒL[", j);
		scanf("%d", &b);
		a[i] -= b;
		i++;
		j++;
	}
	i = 0;
	printf("\n•œ†‰»Œã");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	