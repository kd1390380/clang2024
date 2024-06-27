#include <stdio.h>
void ke(int,int,int* ,float*);
int main(void)
{
	int a,b,c;
	float d;
	printf("data1 data2?");
	scanf("%d %d", &a,&b);
	ke(a, b, &c, &d);
	printf("‡Œv‚Í%d •½‹Ï‚Í%.2f", c, d);
}

void ke(int a,int b,int*c,float*d)
{
	*c = a + b;
	*d = (float)*c / 2;
}