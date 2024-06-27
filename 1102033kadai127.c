#include <stdio.h>
int main(void)
{
	double a[5]={10.800000,20.300000,30.600000,40.400000,50.500000}, sum=0, ave;
	double* pa;
	pa = a;
	printf("data[] = ");
	int i = 0;
	while(i < 5)
	{
		printf("%f ", *pa);
		sum += *pa;
		pa++;
		i++;
	}
	printf("\n");
	ave = sum / i;
	printf("‡Œv %.3f\n", sum);
	printf("•½‹Ï %.3f", ave);
}