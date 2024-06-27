#include <stdio.h>
int main(void) {
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	if ((a >= 0x41&&a<=0x5a)||(a>=0x61&&a<=0x7a)) {
		printf("アルファベットです");
	}
	else if(a>=0x30&&a<=0x39){
		printf("数字です");
	}
	else{
		printf("その他の文字です");
	}
}