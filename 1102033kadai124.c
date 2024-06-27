#include <stdio.h>
int main(void) {
	char c;
	char* pc=&c;
	printf("•¶š");
	scanf("%c", pc);
	printf("Ÿ‚Ì•¶š%c", *pc + 1);
	
}