#include <stdio.h>
int main(void) {
	double a=100,b=10;
	double *pa,*pb;
	pa = &a;
	pb = &b;
	printf("実数１＝");
	scanf("%lf", pa);
	printf("実数２＝");
	scanf("%lf", pb);
	if (pa < pb)
	{
		printf("大きいほう＝%f", *pb);
	}
	else
	{
		printf("大きいほう＝%f", *pa);
	}
}