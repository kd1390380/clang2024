#include <stdio.h>
int main(void) {
	char su = '5',su1='6';
	printf("%c*%c=%d",su,su1,(su-0x30)*(su1-0x30));
}