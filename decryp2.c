#include <stdio.h>
int main(void)
{
	char a[20];
	int  i, j,b;
	printf("�Í����������");
	scanf(" %s", &a);
	printf("�Í�");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	j = 0;
	printf("\n");
	while(a[i]!='\0')
	{
		printf("a[%d]�̕������L�[", j);
		scanf("%d", &b);
		a[i] -= b;
		i++;
		j++;
	}
	i = 0;
	printf("\n��������");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	