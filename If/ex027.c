#include <stdio.h>
int main(void) {
	char a,moji;
	printf("�ꕶ�����́H:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		moji = a - 0x20;
		printf("�ϊ����ʂ�%c",moji);
	}
	else if(a>=0x41 && a<=0x5a){
		moji = a + 0x20;
		printf("�ϊ����ʂ�%c",moji);
	}
	else {
		printf("�G���[");
	}
}