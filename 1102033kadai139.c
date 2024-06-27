#include <stdio.h>
void ab(int,char);
int main(void)
{
	int a;
	char b;
	printf("•¶š");
	scanf("%c", &b);
	printf("®”");
	scanf("%d", &a);
	
	ab(a,b);
}

void ab(int a,char b)
{
	for (int i = 0; i < a; i++)
	{
		printf("%c",b);
	}
}