#include <stdio.h>
int main(void) {
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	if (a >= 0x41&&a<=0x5a) {
		printf("大文字です");
	}
	else{
		printf("その他の文字です");
	}
}