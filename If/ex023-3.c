#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("���Z�q�����:");
	scanf("%d", &c);
	printf("�Q�̐��������;");
	scanf("%d %d", &a, &b);
	if (c == 1) {
		printf("%d+%d=%d", a, b, a + b);
	}
	else if (c == 2) {
		printf("%d-%d=%d", a, b, a - b);
	}
	else if (c == 3) {
		printf("%d*%d=%d", a, b, a * b);
	}
	else if (c == 4) {
		printf("%d/%d=%f", a, b, (float)a / b);
	}
}
