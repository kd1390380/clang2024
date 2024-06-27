#include <stdio.h>
int main(void) {
	char a,moji;
	printf("ˆê•¶Žš“ü—ÍH:");
	scanf("%c", &a);
	if (a >= 0x61 && a<=0x7a ) {
		moji = a - 0x20;
		printf("•ÏŠ·Œ‹‰Ê‚Í%c",moji);
	}
	else if(a>=0x41 && a<=0x5a){
		moji = a + 0x20;
		printf("•ÏŠ·Œ‹‰Ê‚Í%c",moji);
	}
	else {
		printf("ƒGƒ‰[");
	}
}