#include <stdio.h>
int main(void)
{
	int i=0;
	char str[80];
	printf("回数と文字列を入力");
	scanf("%d %s",&i, &str);
	while (i)
	{
		printf("%s\n", str);
		i--;
	}
}