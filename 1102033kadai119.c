#include <stdio.h>
int main(void)
{
	char a[7][10] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	int  i=0, j;
	for (i = 0; i <= 6; i++)
	{
		if (a[i][0] != 's')
		{
			continue;
		}
		j = 0;
		while (a[i][j] != '\0')
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
	}
}
	