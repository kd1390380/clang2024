#include <stdio.h>
int main(void)
{
	 int c,a=0,b=0;
	printf("整数(^zで終了)？");
	while (scanf("%d", &c) != EOF) {
		a += c;
		b++;
		printf("文字(^ zで終了)？");
	}
	printf("合計＝%d 平均＝%.1f", a, (float)a / b);
}