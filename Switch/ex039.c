#include <stdio.h>
int main(void)
{
	char d;
	int i = 0, a, b, c, g;
	float h;

	printf("処理を入力：");
	scanf("%c", &d);

	printf("整数を入力：");
	scanf("%d %d %d", &a, &b, &c);

	switch (i = d)
	{
		case(0x44):
		case(0x64):
			if (a > b)
			{
				if (a > c)
				{
					printf("最大値は%dです", a);
				}
				else
				{
					printf("最大値は%dです", c);
				}

			}
			else
			{
				if (b > c)
				{
					printf("最大値は%dです", b);
				}
				else
				{
					printf("最大値は%dです", c);
				}
			}
			break;
		case(0x53):
		case(0x73):
			if (a < b)
			{
				if (a < c)
				{
					printf("最小値は%dです", a);
				}
				else
				{
					printf("最小値は%dです", c);
				}

			}
			else
			{
				if (b < c)
				{
					printf("最小値は%dです", b);
				}
				else
				{
					printf("最小値は%dです", c);
				}
			}
			break;
		case(0x47):
		case(0x67):
			printf("合計は%dです", a + b + c);
			break;
		case(0x48):
		case(0x68):
			printf("平均は%.2fです", h = (float)(a + b + c) / 3);
			break;
		default:
			printf("エラー");
	}
}