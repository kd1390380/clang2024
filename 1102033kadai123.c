#include <stdio.h>
int main(void) {
	double a=100,b=10;
	double *pa,*pb;
	pa = &a;
	pb = &b;
	printf("À”‚P");
	scanf("%lf", pa);
	printf("À”‚Q");
	scanf("%lf", pb);
	if (pa < pb)
	{
		printf("‘å‚«‚¢‚Ù‚¤%f", *pb);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤%f", *pa);
	}
}