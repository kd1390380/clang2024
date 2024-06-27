#include <stdio.h>
int main(void)
{
	int a[30]={3,5,7,9,11,13,15,17,19,21,0};
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int *pa,*pb,w=0;
	pa =a;
	printf("----実行前----\n配列a[] = ");
	while (*pa != 0)
	{
		printf("%d, ", *pa++);
	}
	pb = b;
	printf("\n配列b[] = ");
	while (*pb != 0)
	{
		printf("%d, ", *pb++);
	}
	printf("\n");
	for(pa = a,pb = b;*pa != 0 ;pa++,pb++)
	{
		w = *pa;
		*pa = *pb;
		*pb = w;
	}

	printf("\n----実行後----\n配列a[] = ");
	
	pa = a;
	while (*pa != 0)
	{
		printf("%d, ", *pa++);
	}
	printf("\n配列b[] = ");
	pb = b;
	while (*pb != 0)
	{
		printf("%d, ", *pb++);
	}
}