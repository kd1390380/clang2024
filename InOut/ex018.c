#include <stdio.h>
int main(void) {
	float d;
	int a, b, c;
	printf("�������R����:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = (float)a + b + c;
	printf("���v��%.2f", d);
	printf("���ρ�%.2f\n",d/3 );
}