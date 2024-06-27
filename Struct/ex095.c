#include <stdio.h>
#include<string.h>
struct syohin
{
	char name[20];
	int tanka;
};

void display1(int);
void display2(struct syohin);

int main(void)
{
	int a = 10;
	struct syohin syohin = { "ÉPÉVÉSÉÄ",50 };
	display1(a);
	display2(syohin);	
}


void display1(int a)
{
	printf("a=%d\n", a);
}


void display2(struct syohin syohin)
{
	printf("syohin.name=%s   syohin.tanka=%d", syohin.name, syohin.tanka);
}
