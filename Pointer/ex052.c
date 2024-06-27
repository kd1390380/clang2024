#include <stdio.h>
int main(void) {
	int a=100,b=200,w;
	int *p_a,*p_b;
	printf("é¿çsëOa = % d b = % d", a, b);
	p_a = &a;
	p_b = &b;
	w = *p_b;
	b = *p_a;
	a = w;
	printf("\né¿çså„a = %d b = %d", a, b);

}