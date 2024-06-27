#include <stdio.h>
#include<string.h>
int main(int a,char *b[])
{
	for (int j = 0; j < a; j++)
	{
		printf("%s\n", b[j]);

	}
	int i;
	char c[5][5] = { "A","B","C","D","E" };
	if(a==1)
	{
		for (i = 0; i < 5; i++)
		{
			printf("%s--%d ", c[i], c[i][0]);
		}
	}
	else
	{
		if (strcmp(b[1], "H") == 0)
		{
			for (i = 0; i < 5; i++)
			{
				printf("%s--0x%x ", c[i], c[i][0]);
			}
		}
		else if (strcmp(b[1], "D") == 0)
		{
			for (i = 0; i < 5; i++)
			{
				printf("%s--%d ", c[i], c[i][0]);
			}
		}
	}
}