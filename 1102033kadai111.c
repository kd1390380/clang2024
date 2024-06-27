#include <stdio.h>
int main(void)
{
	char str[] = {"abcde"};
	int  i, j;
	i = 0;
	while (str[i] != '\0')
	{
		printf("%c",str[i]);
		i++;
	}
}