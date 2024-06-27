#include <stdio.h>
int main(void)
{
	 int c,h,l;
	printf("整数(^zで終了)？");
	scanf("%d", &c);
	printf("整数(^zで終了)？");
	h = c;
	l = c;
	while (scanf("%d", &c) != EOF) {
		if (c > h)
		{
			h = c;
		}
		if (c < l)
		{
			l = c;
		}
		printf("文字(^ zで終了)？");
	}
	printf("max＝%d min＝%d", h, l);
}