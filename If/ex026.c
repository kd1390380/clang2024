#include <stdio.h>
int main(void) {
	int a;
	printf("月を入力:");
	scanf("%d", &a);
	if (a==2) {
		printf("最終日は28日です");
	}
	else if(a==11||a==6||a==4||a==9){
		printf("最終日は30日です");
	}
	else{
		printf("最終日は31日です");
	}
}