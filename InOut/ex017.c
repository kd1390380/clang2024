#include <stdio.h>
int main(void) {
	float a,b,c,d;
	printf("�P�ڂ̎���:");
	scanf("%f" ,&a);
	printf("�Q�ڂ̎���:");
	scanf("%f", &b);
	printf("�R�ڂ̎���:");
	scanf("%f", &c);
	d = a + b + c;
	printf("���v��%.2f", d);
	printf("���ρ�%.2f\n",d/3 );
}