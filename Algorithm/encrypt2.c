#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char a[20];
	int  i;
	printf("���������");
	scanf(" %s", &a);
	printf("�Í����O");
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	int k[20];
	i = 0;
	printf("\n");
	srand(time(0));
	printf("�Í����L�[");
	while(a[i]!='\0')
	{
		rand();
		k[i] = rand()%6;
		printf("%2d", k[i]);
		a[i] += k[i];
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
	