#include <stdio.h>
int main(void)
{
	 int c,h,l;
	printf("����(^z�ŏI��)�H");
	scanf("%d", &c);
	printf("����(^z�ŏI��)�H");
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
		printf("����(^ z�ŏI��)�H");
	}
	printf("max��%d min��%d", h, l);
}