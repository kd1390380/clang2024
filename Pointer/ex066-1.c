#include <stdio.h>
int main(void)
{
	char* p[3] = { "wii","ds","playstation4" }; 
	char** pa;
	for (int i=0; i < 3; i++)
	{
		pa = &p[i];
		while (**pa)
		{
			printf("%c", **pa);
			(*pa)++;
		}
		putchar('\n');
	}
}