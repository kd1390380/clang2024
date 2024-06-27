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
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂���>");
		key = getche();
		printf("\n");
		if (key == 'i')
		{
			printf("�f�[�^����");
			scanf("%d" ,& data);
			result = push(data);
			if (result == -1)
			{
				printf("�X�^�b�N����t�ł�");
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
				printf("�X�^�b�N����ł�");
			}
			else
			{
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZU; i++)
	{
		printf("stack[%2d]��%5", i, stack[i]);
		if (i == sp)
		{
			printf("��sp�������Ă��鏊(����sp��%d)", sp);
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