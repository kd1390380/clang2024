#include <stdio.h>
int main(void) {
	double a=100,b=10;
	double *pa,*pb;
	pa = &a;
	pb = &b;
	printf("�����P��");
	scanf("%lf", pa);
	printf("�����Q��");
	scanf("%lf", pb);
	if (pa < pb)
	{
		printf("�傫���ق���%f", *pb);
	}
	else
	{
		printf("�傫���ق���%f", *pa);
	}
}