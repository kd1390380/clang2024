#include <stdio.h>
int main(void)
{
	int i ;
	float a[3];
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f", &a[i]);
	}
	printf("合計は%.2f\n", a[0] + a[1] + a[2]);
	printf("平均は%.2f", (a[0] + a[1] + a[2]) / 3);	
}