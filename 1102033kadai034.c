#include <stdio.h>
int main(void) {
	char a;
	printf("アルファベット？:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		printf("小文字です");
	}
	else if(a>=0x41 && a<=0x5a){
		printf("大文字です");
	}
	else {
		printf("error");
	}
}