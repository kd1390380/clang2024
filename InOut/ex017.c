#include <stdio.h>
int main(void) {
	float a,b,c,d;
	printf("‚P‚Â–Ú‚ÌÀ”:");
	scanf("%f" ,&a);
	printf("‚Q‚Â–Ú‚ÌÀ”:");
	scanf("%f", &b);
	printf("‚R‚Â–Ú‚ÌÀ”:");
	scanf("%f", &c);
	d = a + b + c;
	printf("‡Œv%.2f", d);
	printf("•½‹Ï%.2f\n",d/3 );
}