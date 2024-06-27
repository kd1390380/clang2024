#include <stdio.h>
int main(void)
{
	char c[11] = "ringo";
	char a[11];
	char* pc, * pa;
	int i=0;
	pc = c;
	pa = a;
	while (*pc !='\0')
	{
		*pc++;
		i++;
	}
	pc--;
	while(*pa)
	{
		*pa = *pc--;
		*pa++;
	}
	printf("ƒRƒs[æ‚Ì•¶š");
	pa = a;
	while (*pa)
	{
		putchar(*pa++);
	}
}