#include <stdio.h>
int goukei(int,int,int);
float heikin(float);
int main(void) 
{
	int a, b,c,d;
	float e;
	printf("3‚Â‚Ì®”=");
	scanf("%d %d %d", &a, &b,&d);
	c = goukei(a, b,d);
	e = heikin(c);
	printf("‡Œv=%d •½‹Ï%.2f",c,e);
}

int goukei(int x1, int x2,int x3)
{
	int z;
	z = x1 + x2 + x3;
	return z;
}

float heikin(float y1)
{
	float z;
	z = y1 / 3;
	return z;
}