#include <stdio.h>
int main(void) {
	char a;
	printf("�A���t�@�x�b�g�H:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		printf("�������ł�");
	}
	else{
		printf("�啶���ł�");
	}
}