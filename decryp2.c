#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j,b;
	printf("暗号文字を入力");
	scanf(" %s", &a);
	printf("暗号");
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
		printf("a[%d]の復号化キー", j);
		scanf("%d", &b);
		a[i] -= b;
		i++;
		j++;
	}
	i = 0;
	printf("\n復号化後");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	