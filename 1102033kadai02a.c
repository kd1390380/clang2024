#include <stdio.h>
int main(void) {
	double a,b;
	printf("2�̎����l�H");
	scanf("%lf" ,&a);
	scanf("%lf", &b);
	printf("�a��%f ", a + b);
	printf("����%f ", a - b);
	printf("�ρ�%f ", a * b);
	printf("����%f ", a / b);
}