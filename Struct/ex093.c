#include <stdio.h>
#include<string.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int num;
};

int main(void)
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5}, {"�P�V�S��",50,2}, {"�t�f�o�R",500,3} },*p;
	p = syohin;
	for (int i = 0; i < 3; i++)
	{
		printf("���i��%s �P��%d ��%d\n", (p+i)->name, (p + i)->tanka, (p + i)->num);
	}
}


