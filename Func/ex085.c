#include <stdio.h>
#include<string.h>
void cu(char* ,char*);
int main(void)
{
	char a1[256],a2[256];
	int mojisu;
	printf("•¶š—ñ1H");
	gets(a1);
	printf("•¶š—ñH");
	gets(a2);
	cu(a1,a2);
	printf("•¶š—ñ%s",a1);
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