#include <stdio.h>
int main(void) {
	int i,a=0;
	i = 1;
	a += i;
	printf("%d", i);
	do
	{
		i++;
		a += i;
		printf("+%d", i);
	} while (a <= 300);
	printf("=%d", a);
}
	