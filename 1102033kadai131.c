#include <stdio.h>
int main(void)
{
	 char c;
	printf("文字(^zで終了)？");
	while (scanf("%c%*c", &c) != EOF) {
		printf("%c\n",c);
		printf("文字(^ zで終了)？");
	}
}