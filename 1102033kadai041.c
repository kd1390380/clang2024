#include <stdio.h>
int main(void) {
	int sum = 0,a,i;
	float av;
	printf("整数（-999で終了）？");
	scanf("%d" ,& a);
	while(a != -999)
	{
		sum += a;
		printf("整数（-999で終了）？");
		scanf("%d", & a);
		i++;
	}
	printf("合計＝%d", sum);
	printf("平均＝%.2f", av = (float)sum / i);
}