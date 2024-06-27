#include <stdio.h>
#include<stdlib.h>
int main(int s ,char *a[])
{
	int b;
	b = atoi(a[1]) + atoi(a[2]);
	printf("%s+%s=%d" ,a[1], a[2], b);
}


