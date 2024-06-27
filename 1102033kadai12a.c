#include <stdio.h>
int main(void)
{
	int a[30]={3,5,7,9,11,13,15,17,19,21,0};
	int b[30]={ 4,8,12,16,20,24,28,32,38,42,0 }, i = 0;
	int *pa,*pb;
	pa = a;
	pb = b;
	printf("----実行前----\n配列a[] = ");
	while (*pa != 0)
	{
		printf("%d ", *pa++);
		i++;
	}
	printf("\n");
	*pa--;
	while (*pb!=0)
	{
		*pb = *pa--;
		pb++;
		i--;
		
	}

	printf("\n----実行後----\n配列a[] = ");
	pb = b;
	while (*pb != 0)
	{
		printf(" % d", *pb++);
	}
}