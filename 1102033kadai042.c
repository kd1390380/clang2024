#include <stdio.h>
int main(void) {
	int a=0,i=1;
	while(1)
	{
		a += i;
		if (a > 300)
		{
			break;
		}
		printf("%d+",i);
		i++;
	}
	printf("%d%d",i, a);
}