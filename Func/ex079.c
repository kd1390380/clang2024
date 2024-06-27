#include <stdio.h>
int go1(int[],int);
int main(void)
{
	int a[]={10,20,30,40,50}, b;
	b = go1(a,5);
	printf("goukei=%d", b);
}


int go1(int a[],int nb)
{
	int go = 0;
	for (int i = 0; i < nb; i++)
	{
		go += a[i];
	}
	return go;
}