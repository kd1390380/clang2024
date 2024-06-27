#include <stdio.h>
int main(void) {
	int a,b;
	int *p_a,*p_b;
	a = 50;
	b = 10;
	p_a = &a;
	p_b = &b;
	printf("%d + %d = %d",*p_a,*p_b,*p_a + *p_b);

}