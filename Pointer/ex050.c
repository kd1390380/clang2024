#include <stdio.h>
int main(void) {
	int a=100,b;
	int *p_a;
	p_a = &a;
	b = *p_a;
	printf("a = %d &a = %p",a,&a);
	printf("\np_a = %d *p_a = %d &p_a = %p",p_a,*p_a,p_a);

}