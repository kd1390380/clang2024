#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j;
	printf("文字を入力");
	scanf(" %s", &a);
	printf("暗号化前");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	while(a[i]!='\0')
	{
		a[i] += 1;
		i++;
	}
	i = 0;
	printf("\n暗号化後");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	