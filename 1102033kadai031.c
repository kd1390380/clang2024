#include <stdio.h>
int main(void) {
	int a,b;
	printf("2つの実数値?:");
	scanf("%d %d", &a,&b);
	if (a > b) {
		printf("大きいほうは%dです",a);
	}
	else{
		printf("大きいほうは%dです",b);
	}
}