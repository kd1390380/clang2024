#include <stdio.h>
int main(void) {
	char c;
	char* pc=&c;
	printf("文字＝");
	scanf("%c", pc);
	printf("次の文字＝%c", *pc + 1);
	
}