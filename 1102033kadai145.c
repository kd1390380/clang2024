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
	struct fruit a[3] = { {"perch",300,5,3,0},
						{"grape",200,4,10,0},
						{"watermelon",1500,5,8,0}};
	int total=0;
	for (int i = 0; i < 3; i++)
	{
		a[i].total = a[i].price * a[i].number;
		total += a[i].total;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("���i���F%s\n���i:%d   ", a[i].name, a[i].price);
		printf("���E�ߓx:");
		for (int j = 0; j < a[i].point; j++)
		{
			printf("��");
		}
		for (int j = 0; j < 5 - a[i].point; j++)
		{
			printf("��");
		}
		printf("\n���F%d   ���z�F%d-\n\n\n", a[i].number, a[i].total);
	}
	printf("���v���z �� %d-",total);
}