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
	struct fruit peach;
	strcpy(peach.name, "peach");
	peach.number = 3;
	peach.point = 5;
	peach.price = 300;
	peach.total = 0;
	peach.total = peach.price * peach.number;
	printf("���i���F%s\n���i%d:\n", peach.name, peach.price);
	printf("���E�ߓx:");
	for (int i = 0; i < peach.point; i++)
	{
		printf("��");
	}
	printf("\n���F%d\n���z�F%d-", peach.number, peach.total);
}