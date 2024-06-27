#include <stdio.h>
int main(void) {
	int a,b;
	printf("®”‚P:");
	scanf("%d", &a);
	printf("®” 2:");
	scanf("%d", &b);
	if (a > b ) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢",a,b,a-b);
	}
	else if(a < b){
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢",a, b, b - a);
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢",a,b);
	}
}