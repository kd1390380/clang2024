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
	strcpy(a.name1,"�Q�[���\�t�g�T�R�[�X");
	strcpy(a.name2, "C����");
	a.tani = 8;
	printf("�R�[�X��:%s\n����:%s\n�P��:%d", a.name1, a.name2, a.tani);
}