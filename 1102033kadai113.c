#include <stdio.h>
int main(void)
{
	char str[] = {"GameSoft"};
	int  i=0, j;
	printf("文字列=%s\n",str);
	while (str[i]!='\0')
		{
			i++;
		}
	printf("文字数 = %d 文字", i);
}
	