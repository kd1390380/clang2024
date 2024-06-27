#include <stdio.h>
#include<string.h>
#define QUEUESIZU 8
int queue[QUEUESIZU];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int);
int dequeue(int*);

int main(void)
{
	int key, data, result;
	do {
		printf("\n\nエンキューはi、デキューはoを入力して>");
		key = getche();
		printf("\n");


		if (key == 'i')
		{
			printf("データ入力");
			scanf("%d" ,& data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("キューが一杯です");
			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("キューが空です");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZU; i++)
	{
		printf("stack[%2d]は%5", i, queue[i]);
		if (i == head)
		{
			printf("←headが示している所(現在spは%d)", head);
		}
		if (i == tail)
		{
			printf("←tailが示している所(現在spは%d)", tail);
		}
		printf("\n");
	}
}

int enqueue(int d)
{
	if ((tail%QUEUESIZU)+1 == head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZU;
	return 0;
}

int dequeue(int *pd)
{
	if (tail == head) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZU;
	return 0;
}