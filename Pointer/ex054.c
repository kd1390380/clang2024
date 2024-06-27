#include <stdio.h>
int main(void) {
	int a[3] = {10,20,30},i;
	double b[3] = {10.0,20.0,30.0};
	int* pa;
	double *pb;
	printf("p_itbl =");
	pa = a;
	for (i = 0; i < 3; i++)
	{
		printf("%3d", *pa);
		pa++;
	}
	printf("p_dStbl =");
	pb = b;
	for (i = 0; i < 3; i++)
	{
		printf("%3.1f ", *pb);
		pb++;
	}
}