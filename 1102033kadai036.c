#include <stdio.h>
int main(void) {
	int a,b;
	printf("整数１:");
	scanf("%d", &a);
	printf("整数 2:");
	scanf("%d", &b);
	if (a > b ) {
		printf("%dの方が%dより%d大きい",a,b,a-b);
	}
	else if(a < b){
		printf("%dの方が%dより%d小さい",a, b, b - a);
	}
	else {
		printf("%dと%dは等しい",a,b);
	}
}