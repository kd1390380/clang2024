#include <stdio.h>
int main(void)
{
	 char c[50],*p;
	 int i;
	printf("����(^z�ŏI��)�H");
	while (scanf("%s", &c) != EOF) {
		p = c;
		i = 0;
		while (*p++)
		{
			i++;
		}
		i++;
		*p--;
		while (i)
		{
			printf("%c",* p--);
			i--;
		}
		printf("\n����(^ z�ŏI��)�H");
	}
}