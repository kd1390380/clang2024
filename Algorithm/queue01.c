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
		printf("\n\n�G���L���[��i�A�f�L���[��o����͂���>");
		key = getche();
		printf("\n");


		if (key == 'i')
		{
			printf("�f�[�^����");
			scanf("%d" ,& data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("�L���[����t�ł�");
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
				printf("�L���[����ł�");
			}
			else
			{
				printf("�L���[����f�[�^(%d)�����o���܂���", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZU; i++)
	{
		printf("stack[%2d]��%5", i, queue[i]);
		if (i == head)
		{
			printf("��head�������Ă��鏊(����sp��%d)", head);
		}
		if (i == tail)
		{
			printf("��tail�������Ă��鏊(����sp��%d)", tail);
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