#include <stdio.h>
int main(void)
{
	char a[7][10] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	int  i=0, j;
	for (i = 0; i <= 6; i++)
	{
		puts(a[i]);
	}
}
	