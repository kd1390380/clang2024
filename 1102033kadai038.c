#include <stdio.h>
int main(void) {
	char a,moji;
	printf("一文字入力？:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		moji = a - 0x20;
		printf("変換結果は%c",moji);
	}
	else if(a>=0x41 && a<=0x5a){
		moji = a + 0x20;
		printf("変換結果は%c",moji);
	}
	else {
		moji = a;
		printf("変換結果は%c",moji);
	}
}