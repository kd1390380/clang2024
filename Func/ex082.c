#include <stdio.h>
#include<string.h>
void so(int[],int);
int main(void)
{
	int a[8] = {6,10,8,2,9,5,1,7};
	char str[256];
	printf("~‡‚©¸‡‚©F");
	scanf("%s", str);
	if (strcmp(str, "¸‡")== 0)
	{
		so(a,0);
	}
	else if (strcmp(str, "~‡") == 0)
	{
		so(a, 1);
	}
	else
	{
		printf("error");
	}
	for (int i = 0; i < 8; i++)
	{
		printf(" %d ", a[i]);
	}
}


void so(int a[],int b)
{
	int w;
	switch (b)
	{
		case 0:
			for (int i = 0; i < 7; i++)
			{
				for (int j = i+1; j < 8; j++)
				{
					if (a[i] > a[j])
					{
						w = a[i];
						a[i] = a[j];
						a[j] = w;
					}
				}
			}
			break;
		case 1:
			for (int i = 0; i < 7; i++)
			{
				for (int j = i + 1; j < 8; j++)
				{
					if (a[i] < a[j])
					{
						w = a[i];
						a[i] = a[j];
						a[j] = w;
					}
				}
			}
			break;
	}
}