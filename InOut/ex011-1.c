#include <stdio.h>
int main(void) {
	int i;
	char moji[10]="ABCabc012 ";
	for (i = 0; i <= 9; i++) {
		printf("%c:%d %x\n",moji[i],moji[i],moji[i]);
	}
}