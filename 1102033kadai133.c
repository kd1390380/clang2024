#include <stdio.h>
int main(void)
{
	 int c,h,l;
	printf("ฎ(^zลIน)H");
	scanf("%d", &c);
	printf("ฎ(^zลIน)H");
	h = c;
	l = c;
	while (scanf("%d", &c) != EOF) {
		if (c > h)
		{
			h = c;
		}
		if (c < l)
		{
			l = c;
		}
		printf("ถ(^ zลIน)H");
	}
	printf("max%d min%d", h, l);
}