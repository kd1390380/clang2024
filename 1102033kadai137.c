#include <stdio.h>
int ab(char);
int main(void)
{
	int c;
	char a;
	printf("�����F");
	scanf("%c",&a);
	c = ab(a);
	if (c == 0)
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͏������ł�", c);
	}
	if (c == 1)
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͑啶���ł�", c);
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