#include <stdio.h>
int main(void)
{
	int i, b , c ;
	int a[10] = { 10,5,23,29,2,6,3,1,70,100 };
	printf("”z—ñ a =");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	c = a[0];
	b = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i] > b)
		{
			b = a[i];
		}
		if (a[i] < c)
		{
			c = a[i];
		}
	}
	printf("\nÅ‘å’l%d    Å¬’l%d", b, c);
}