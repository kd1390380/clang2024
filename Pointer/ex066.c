#include <stdio.h>
int main(void)
{
	char* p[3] = { "wii","ds","playstation4" },**pa;
	pa = p;
	for (int i=0; i < 3; i++)
	{
		puts(pa[i]);
	}
}