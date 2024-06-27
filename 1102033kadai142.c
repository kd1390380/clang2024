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
	printf("コース名:");
	scanf("%s", a.name1);
	printf("教科:");
	scanf("%s", a.name2);
	printf("単位:");
	scanf("%d", &a.tani);
	printf("コース名:%s\n教科:%s\n単位:%d", a.name1, a.name2, a.tani);
}