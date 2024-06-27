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
	struct syohin_data syohin[3] = { {"エンピツ",30,5}, {"ケシゴム",50,2}, {"フデバコ",500,3} },*p;
	p = syohin;
	for (int i = 0; i < 3; i++)
	{
		printf("商品名%s 単価%d 個数%d\n", (p+i)->name, (p + i)->tanka, (p + i)->num);
	}
}


