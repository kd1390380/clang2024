#include <stdio.h>
#include<string.h>
struct syohin
{
	char name[20];
	int tanka;
};

void display1(int);
void display2(struct syohin*);

int main(void)
{
	int a = 10;
	struct syohin syohin = { "ƒPƒVƒSƒ€",50 },*p;
	p = &syohin;
	display2(p);	
}


void display2(struct syohin *p)
{
	printf("%s   %d", p->name,p->tanka);
}
