#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int i,c[10],a;
	srand(time(0));
	rand();
	for (i = 0; i < 10; i++)
	{
		c[i] = rand() % 100 + 1;
	}
	printf("data");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	printf("数値を入力：");
	scanf("%d",&a);
	for (i = 0; i < 10; i++)
	{
		if (c[i] == a)
		{
			printf("見つかりました%d番です", i);
			break;
		}
		
	}
	if (i == 10)
	{
		printf("見つかりませんでした");
	}

}