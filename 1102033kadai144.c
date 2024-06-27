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
	struct fruit* p;
	p = &peach;
	strcpy(p->name, "peach");
	p->number = 3;
	p->point = 5;
	p->price = 300;
	p->total = 0;
	p->total = p->price * p->number;
	printf("¤•i–¼F%s\n‰¿Ši%d:\n", p->name, p->price);
	printf("‚¨‘E‚ß“x:");
	for (int i = 0; i < p->point; i++)
	{
		printf("š");
	}
	printf("\nŒÂ”F%d\n‹àŠzF%d-", p->number, p->total);
}