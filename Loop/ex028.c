#include <stdio.h>
int main(void) {
	int sum = 0,a;
	printf("数を入れて");
	scanf("%d" ,& a);
	while(a != -999)
	{
		sum += a;
		printf("数を入れて");
		scanf("%d", & a);
	}
	printf("合計＝%d", sum);
}