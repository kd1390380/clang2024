#include <stdio.h>
int main(void) {
	int a,b;
	printf("�����P:");
	scanf("%d", &a);
	printf("���� 2:");
	scanf("%d", &b);
	if (a > b ) {
		printf("%d�̕���%d���%d�傫��",a,b,a-b);
	}
	else if(a < b){
		printf("%d�̕���%d���%d������",a, b, b - a);
	}
	else {
		printf("%d��%d�͓�����",a,b);
	}
}