#include <stdio.h>
#define nb 5
int go1(int*);
int main(void)
{
	int a[]={10,20,30,40,50}, b;
	b = go1(a);
	printf("goukei=%d", b);
}


int go1(int *p)
{
	int go = 0;
	for (int i = 0; i<nb; *p++,i++)
	{
		go += *p;
	}
	return go;
}