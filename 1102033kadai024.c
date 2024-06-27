#include <stdio.h>
int main(void) {
	int idata,a;
	printf("®”H");
	scanf("%d" ,&idata);
	scanf("%d", &a);
	printf("%d+%d=%d\n", idata, a, idata + a);
	printf("%d-%d=%d\n", idata, a, idata - a);
	printf("%d*%d=%d\n", idata, a, idata * a);
	printf("%d/%d=%d‚ ‚Ü‚è%d\n", idata, a, idata / a, idata % a);
}