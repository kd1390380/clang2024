#include <stdio.h>
int main(void) {
	char a;
	printf("���������:");
	scanf("%c", &a);
	if ((a >= 0x41&&a<=0x5a)||(a>=0x61&&a<=0x7a)) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else if(a>=0x30&&a<=0x39){
		printf("�����ł�");
	}
	else{
		printf("���̑��̕����ł�");
	}
}