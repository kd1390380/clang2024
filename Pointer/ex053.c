#include <stdio.h>
int main(void) {
	int a=100,b=200;
	int *p_a,*p_b,*w;
	
	p_a = &a;
	p_b = &b;
	printf("実行前p_a = %d p_b = %d", *p_a, *p_b);
	w = p_b;
	p_b = p_a;
	p_a = w;
	printf("\n実行後p_a = %d p_b = %d", *p_a, *p_b);

}