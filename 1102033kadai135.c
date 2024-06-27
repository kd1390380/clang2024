#include <stdio.h>
int main(void)
{
	 char c[50],*p;
	 int i;
	printf("文字(^zで終了)？");
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
		printf("\n文字(^ zで終了)？");
	}
}