#include <stdio.h>
int main(void)
{
	char c[20] = "mikan to ringo";
	char* pc;
	pc = c;
	printf("‹ó”’‚ğæ‚èœ‚¢‚½•¶š");
	
	while (*pc)
	{
		if (*pc == ' ')
		{
			*pc++;
			continue;
		}
		putchar(*pc++);
	}
}