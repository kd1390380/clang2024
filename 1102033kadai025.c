#include <stdio.h>
int main(void) {
	int idata;
	printf("8進数の数値？");
	scanf("%o" ,&idata);
	printf("10進数＝%d\n",idata);
}