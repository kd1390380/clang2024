#include <stdio.h>
int main(void)
{
	int i = 0, a;
	while (1)
	{
		printf("数入れて：");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		i += a;
	}
	printf("合計＝%d", i);
}