#include <stdio.h>
int main(void)
{
	char str[80];
	int  i=0, j;
	printf("文字列=");
	scanf("%s", &str);
	while (str[i]!='\0')
		{
			i++;
		}
	printf("文字数 = %d 文字", i);
}
	