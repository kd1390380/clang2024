#include <stdio.h>
#include<string.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

int main(void)
{
	struct fruit a[3] = {{"perch",300,5,3,0},
						{"grape",200,4,10,0},
						{"watermelon",1500,5,8,0}};
	struct fruit* pa;
	pa = a;
	int total=0;
	for (int i = 0; i < 3; i++)
	{
		(pa + i)->total = (pa+i)->price * (pa+i)->number;
		total += (pa + i)->total;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("���i���F%s\n���i:%d   ", (pa + i)->name, (pa + i)->price);
		printf("���E�ߓx:");
		for (int j = 0; j < (pa + i)->point; j++)
		{
			printf("��");
		}
		for (int j = 0; j < 5 - (pa + i)->point; j++)
		{
			printf("��");
		}
		printf("\n���F%d   ���z�F%d-\n\n\n", (pa + i)->number, (pa + i)->total);
	}
	printf("���v���z �� %d-",total);
}