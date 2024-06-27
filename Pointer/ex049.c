#include <stdio.h>
int main(void) {
	int a=100,b;
	int *p_a;
	p_a = &a;
	b = *p_a;
	printf("a = %d b = %d p_a = %d", a, b, *p_a);

}