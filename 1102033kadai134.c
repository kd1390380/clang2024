#include <stdio.h>
int main(void)
{
	 char c[50];
	printf("文字(^zで終了)？");
	while (scanf("%s", &c) != EOF) {
		printf("%s\n",c);
		printf("文字(^ zで終了)？");
	}
}