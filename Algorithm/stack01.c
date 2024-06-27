#include <stdio.h>
#include<string.h>
#define STACKSIZU 8
int stack[STACKSIZU];
int sp = 0;

void display(void);
int push(int);
int pop(int*);

int main(void)
{
	int key, data, result;
	do {
		printf("\n\nプッシュはi、ポップはoを入力して>");
		key = getche();
		printf("\n");
		if (key == 'i')
		{
			printf("データ入力");
			scanf("%d" ,& data);
			result = push(data);
			if (result == -1)
			{
				printf("スタックが一杯です");
			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("スタックが空です");
			}
			else
			{
				printf("スタックからデータ(%d)を取り出しました", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZU; i++)
	{
		printf("stack[%2d]は%5", i, stack[i]);
		if (i == sp)
		{
			printf("←spが示している所(現在spは%d)", sp);
		}
		printf("\n");
	}
}

int push(int d)
{
	if (sp >= STACKSIZU) { return -1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int *pd)
{
	if (sp <= 0) { return -1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}