#include <stdio.h>
int main(void) {
	int idata,a;
	printf("整数？");
	scanf("%d" ,&idata);
	scanf("%d", &a);
	printf("%d+%d=%d\n", idata, a, idata + a);
	printf("%d-%d=%d\n", idata, a, idata - a);
	printf("%d*%d=%d\n", idata, a, idata * a);
	printf("%d/%d=%dあまり%d\n", idata, a, idata / a, idata % a);
}