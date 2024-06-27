#include <stdio.h>
int main(void) {
	char a;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &a);
	if (a >= 0x41&&a<=0x5a) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}