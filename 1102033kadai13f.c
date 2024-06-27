#include <stdio.h>
#include<string.h>
void ab(int[],char*);
int main(void)
{
	int a[] = {10,25,7,45,2,100,3,70,50};
	char b[256];
	printf("ソート方法(降順・昇順)");
	scanf("%s", &b);
	puts("ソート前");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	
	ab(a,b);
	printf("\nソート後\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
}

void ab(int a[],char *b)
{
	int w;
	if (strcmp(b, "降順"))
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = i + 1; j < 9; j++)
			{
				if (a[i] < a[j])
				{
					w = a[i];
					a[i] = a[j];
					a[j] = w;
				}
			}
		}
	}
	else if (strcmp(b, "昇順"))
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = i + 1; j < 9; j++)
			{
				if (a[i] > a[j])
				{
					w = a[i];
					a[i] = a[j];
					a[j] = w;
				}
			}
		}
	}
	
	
	
}