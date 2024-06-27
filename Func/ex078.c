#include <stdio.h>
int go(int*);
int go1(int[]);
int main(void)
{
	int a[]={10,20,30,40,-999}, b;
	b = go(a);
	printf("goukei=%d\n", b);
	b = go1(a);
	printf("goukei=%d", b);
}

int go(int*p)
{
	int go=0;
	while (*p != -999)
	{
		go += *p++;
	}
	return go;
}

int go1(int a[])
{
	int go=0,i=0;
	while (a[i] != -999)
	{
		go += a[i];
		i++;
	}
	return go;
}