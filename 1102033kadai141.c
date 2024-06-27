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
	strcpy(a.name1,"ゲームソフトⅠコース");
	strcpy(a.name2, "C言語");
	a.tani = 8;
	printf("コース名:%s\n教科:%s\n単位:%d", a.name1, a.name2, a.tani);
}