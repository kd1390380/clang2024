#include <stdio.h>
int main(void) {
	int a,b;
	printf("®”‚P`100:");
	scanf("%d", &a);
	if (a >= 90 ) {
		printf("”»’èŒ‹‰Ê‚Í5‚Å‚·");
	}
	else if(a>=80 && a<90){
		printf("”»’èŒ‹‰Ê‚Í4‚Å‚·");
	}
	else if(a>=50 && a<80){
		printf("”»’èŒ‹‰Ê‚Í3‚Å‚·");
	} 
	else if(a>=30 && a<50){
		printf("”»’èŒ‹‰Ê‚Í2‚Å‚·");
	}
	else {
		printf("”»’èŒ‹‰Ê‚Í1‚Å‚·");
	}
}