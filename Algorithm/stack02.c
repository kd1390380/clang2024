#include <stdio.h>
#include<string.h>
#define SX 1
#define SY 1

#define GX 8
#define GY 1

int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
}

#define STACKSIZU 46
int stack[STACKSIZU];
int sp = 0;

void DrawMaze(void)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 10; j++)
		{

		}
	}
}

int push(int d)
{
	if (sp >= STACKSIZU) { return -1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}

int susumu(int x, int y)
{
	int i;
	while (1)
	{
		map[y][x] = 1;
		if (x == GX && y == GY) { return 0; }



		if (map[y - 1][x] == 0) { y -= 1; continue; }
		if (map[y + 1][x] == 0) { y += 1; continue; }
		if (map[y][x - 1] == 0) { x -= 1; continue; }
		if (map[y][x + 1] == 0) { x += 1; continue; }
	}
}

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