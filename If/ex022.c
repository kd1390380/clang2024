#include <stdio.h>
int main(void) {
	int a;
	printf("西暦を入力:");
	scanf("%d", &a);
	if (a >= 1989) {
		printf("平成生まれです");
	}
	else{
		printf("昭和生まれです");
	}
}