#include <stdio.h>
int ab(char);
int main(void)
{
	int c;
	char a;
	printf("文字：");
	scanf("%c",&a);
	c = ab(a);
	if (c == 0)
	{
		printf("戻り値が%dなので入力した文字は小文字です", c);
	}
	if (c == 1)
	{
		printf("戻り値が%dなので入力した文字は大文字です", c);
	}
}

int ab(char a)
{
	int z;
	if (a >= 0x41&&a<0x5a)
	{
		z = 1;
	}
	if(a>=0x61&&a<0x7a)
	{
		z = 0;
	}
	return z;
}