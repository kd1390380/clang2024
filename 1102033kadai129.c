#include <stdio.h>
int main(void)
{
	int a[30]={3,5,7,9,11,13,15,17,19,21,0};
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int *pa,*pb,w=0;
	pa =a;
	printf("----���s�O----\n�z��a[] = ");
	while (*pa != 0)
	{
		printf("%d, ", *pa++);
	}
	pb = b;
	printf("\n�z��b[] = ");
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

	printf("\n----���s��----\n�z��a[] = ");
	
	pa = a;
	while (*pa != 0)
	{
		printf("%d, ", *pa++);
	}
	printf("\n�z��b[] = ");
	pb = b;
	while (*pb != 0)
	{
		printf("%d, ", *pb++);
	}
}