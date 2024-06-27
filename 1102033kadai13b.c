#include <stdio.h>
void ab(char[]);
int main(void)
{
	char a[] = "test program";
	ab(a);
}

void ab(char a[])
{
	printf("%s", a);
}