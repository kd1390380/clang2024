#include <stdio.h>
int main(void) {
	int a=100,b=10;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("%d+%d=%d\n", *pa, *pb, *pa + *pb);
	printf("%d-%d=%d\n", *pa, *pb, *pa - *pb);
	printf("%d*%d=%d\n", *pa, *pb, *pa * *pb);
	printf("%d/%d=%d", *pa, *pb, *pa / *pb);
}