#include <stdio.h>
#include <string.h>

#define CNT 4

int main(void)
{
	char* p[] = { "Programming2","Algorithm","Programming1","C"},*w;
	int i, j;

	for (i = 0; i < CNT-1; i++)
	{
		for (j = i + 1; j < CNT; j++)
		{
			if (strcmp(p[i], p[j]) > 0)
			{
				w = p[i];
				p[i] = p[j];
				p[j] = w;
			}
		}
	}
	
	for (i = 0; i < CNT; i++)
	{
		puts(p[i]);
	}
}