#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j;
	printf("���������");
	scanf(" %s", &a);
	printf("�Í����O");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	while(a[i]!='\0')
	{
		a[i] += 1;
		i++;
	}
	i = 0;
	printf("\n�Í�����");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	