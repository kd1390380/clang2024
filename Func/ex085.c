#include <stdio.h>
#include<string.h>
void cu(char* ,char*);
int main(void)
{
	char a1[256],a2[256];
	int mojisu;
	printf("������1�H");
	gets(a1);
	printf("������H");
	gets(a2);
	cu(a1,a2);
	printf("������%s",a1);
}


void cu(char *a1,char *a2)
{
	int i=0 ,j;
	while (*a1++ != '\0');
	*a1--;
	while (*a2 != '\0')
	{
		*a1 = *a2;
		*a1++, *a2++;
	}
	*a1 = '\0';
}