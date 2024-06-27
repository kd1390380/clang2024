#include <stdio.h>
int main(void)
{
	int a, b=0,i=0;
	for(i=1;i<=20;i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
}