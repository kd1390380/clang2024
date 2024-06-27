#include <stdio.h>
int main(void) {
	char a;
	printf("アルファベット？:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		printf("小文字です");
	}
	else{
		printf("大文字です");
	}
}