#include <stdio.h>
int main(void)
{
	int a[10]={10,9,1,20,45,21,38,45,88}, max, min;
	int* pa;
	pa = a;
	printf("data[] = ");
	max = *pa;
	min = *pa;
	int i = 0;
	while(i < 9)
	{
		printf("%d ", *pa);
		if (max < *pa)
		{
			max = *pa;
		}
		if (min > *pa)
		{
			min = *pa;
		}
		pa++;
		i++;
	}
	printf("最大値 ＝%d", max);
	printf("最小値 ＝%d", min);
}