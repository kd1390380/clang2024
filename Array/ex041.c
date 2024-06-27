#include <stdio.h>
int main(void)
{
	int i ;
	float a[3];
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &a[i]);
	}
	printf("‡Œv‚Í%.2f\n", a[0] + a[1] + a[2]);
	printf("•½‹Ï‚Í%.2f", (a[0] + a[1] + a[2]) / 3);	
}