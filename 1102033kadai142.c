#include <stdio.h>
#include<string.h>
struct asd
{
	char name1[30];
	char name2[20];
	int tani;
};

int main(void)
{
	struct asd a;
	char b;
	printf("�R�[�X��:");
	scanf("%s", a.name1);
	printf("����:");
	scanf("%s", a.name2);
	printf("�P��:");
	scanf("%d", &a.tani);
	printf("�R�[�X��:%s\n����:%s\n�P��:%d", a.name1, a.name2, a.tani);
}