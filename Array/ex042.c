#include <stdio.h>
int main(void)
{
	char a[] = {"Apple"};
	int i;
	printf("１文字ずつ表示\n");
	for (i = 0; i < 5; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n文字列で表示\n%s",& a);
}