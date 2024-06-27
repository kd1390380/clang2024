#include <stdio.h>
#include<string.h>
void ab(char*,char*);
int main(void)
{
	char *a = "関数",*b="わかるかな？";
	printf("配列１moji:%s\n配列２moji:%s", a, b);
	ab(a,b);
	printf("\n連結された後の文字列moji1:%s", a);
}

void ab(char*a,char*b)
{
	strcat(a, b);
}