#include <stdio.h>
int main(void) {
	char c;
	char* pc=&c;
	printf("������");
	scanf("%c", pc);
	printf("���̕�����%c", *pc + 1);
	
}