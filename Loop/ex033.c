#include <stdio.h>
int main(void) {
	int i , a , j=0,b=0;
	float c;
	
	printf("”‚ÍH");
	scanf("%d", &i);
	for (; i != -999 ; )
	{
		b += i;
		j++;
		printf("”‚ÍH");
		scanf("%d", &i);
	}
	c = (float)b / j;
	printf("‡Œv%d       •½‹Ï%.2f", b, c);
}