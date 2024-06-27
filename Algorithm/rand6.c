#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a,b,c;
	srand(time(0));
	rand();
	a = rand() % 3 + 1;
	printf("パー 1 チョキ 2 グー 3 :");
	scanf("%d",&b);
	switch (b)
	{
		case 1:
			printf("プレイヤーはパー");
			break;
		case 2:
			printf("プレイヤーはチョキ");
			break;
		case 3:
			printf("プレイヤーはグー");
			break;
	}
	printf("\n");
	switch (a)
	{
	case 1:
		printf("CPはパー");
		break;
	case 2:
		printf("CPはチョキ");
		break;
	case 3:
		printf("CPはグー");
		break;
	}
	printf("\n");
	c = a - b;
	if (c == 0)
	{
		printf("あいこです");
	}
	else if (c == -1 || c == 2)
	{
		printf("プレイヤーの勝ち");
	}
	else
	{
		printf("CPの勝ち");
	}

}