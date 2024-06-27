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
	printf("è§ïiñºÅF%s\nâøäi%d:\n", peach.name, peach.price);
	printf("Ç®ëEÇﬂìx:");
	for (int i = 0; i < peach.point; i++)
	{
		printf("Åö");
	}
	printf("\nå¬êîÅF%d\nã‡äzÅF%d-", peach.number, peach.total);
}