#include <stdio.h>
int main(void) {
	char a;
	printf("�A���t�@�x�b�g�H:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		printf("�������ł�");
	}
	else if(a>=0x41 && a<=0x5a){
		printf("�啶���ł�");
	}
	else {
		printf("error");
	}
}