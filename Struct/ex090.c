#include <stdio.h>
#include<string.h>
struct syohin_data
{
	char name[20];
	int tanka;
};

int main(void)
{
	struct syohin_data syohin1, *p;
	p = &syohin1;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("syohin1.name=%s\n", syohin1.name);
	printf("syohin1.tanka=%d\n", syohin1.tanka);
}


