#include <stdio.h>
int main(void)
{
	char a[] = {"Apple"};
	int i;
	printf("�P�������\��\n");
	for (i = 0; i < 5; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n������ŕ\��\n%s",& a);
}