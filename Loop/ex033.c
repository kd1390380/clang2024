#include <stdio.h>
int main(void) {
	int i , a , j=0,b=0;
	float c;
	
	printf("数は？");
	scanf("%d", &i);
	for (; i != -999 ; )
	{
		b += i;
		j++;
		printf("数は？");
		scanf("%d", &i);
	}
	c = (float)b / j;
	printf("合計＝%d       平均＝%.2f", b, c);
}