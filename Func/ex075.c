#include <stdio.h>
void keisan(int, int, int*, int*, int*, int*);
int main(void)
{
	int a, b, c, d, e, f;
	printf("kazu1 kazu2?");
	scanf("%d %d", &a, &b);
	keisan(a, b, &c, &d, &e, &f);
	printf("wa=%d sa=%d seki=%d syou=%d", c, d, e, f);
}

void keisan(int a ,int b,int*c,int*d,int*e,int*f)
{
	*c = a + b;
	*d = a - b;
	*e = a * b;
	*f = a / b;
}