#include <stdio.h>
int main(void) {
	int a;
	printf("西暦を入力:");
	scanf("%d", &a);
	if (a%4 == 0) {
		printf("うるう年です");
	}
	else{
		printf("うるう年ではないです");
	}
}