#include <stdio.h>
int main(void)
{
	int i;
	int c[10], a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	printf("�z�� a =");
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n�z�� c =");
	for (i = 0; i < 10; i++)
	{
		c[i] = a[9-i];
		printf("%d ", c[i]);
	}
}