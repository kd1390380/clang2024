#include <stdio.h>
int main(void) {
	char moji1;
	moji1 = 'A';
	printf("moji:%c\n", moji1);
	printf("小文字に変換:%c",moji1 + 0x20);
}