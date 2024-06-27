#include <stdio.h>
int main(void) {
	int a;
	printf("整数？:");
	scanf("%d", &a);
	if (a > 0 ) {
		printf("プラスです");
	}
	else if(a < 0){
		printf("マイナスです");
	}
	else {
		printf("０です");
	}
}