#include <stdio.h>
int main(void) {
	char a;
	printf("���������:");
	scanf("%c", &a);
	if (a >= 0x41&&a<=0x5a) {
		printf("�啶���ł�");
	}
	else{
		printf("���̑��̕����ł�");
	}
}