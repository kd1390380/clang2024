#include <stdio.h>
int main(void) {
	int a,b;
	printf("2�̎����l?:");
	scanf("%d %d", &a,&b);
	if (a > b) {
		printf("�傫���ق���%d�ł�",a);
	}
	else{
		printf("�傫���ق���%d�ł�",b);
	}
}