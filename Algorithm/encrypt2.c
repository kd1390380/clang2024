#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char a[20];
	int  i;
	printf("文字を入力");
	scanf(" %s", &a);
	printf("暗号化前");
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
	printf("暗号化キー");
	while(a[i]!='\0')
	{
		rand();
		k[i] = rand()%6;
		printf("%2d", k[i]);
		a[i] += k[i];
		i++;
	}
	i = 0;
	printf("\n暗号化後");
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
}
	