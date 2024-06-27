#include <stdio.h>
#include<string.h>
void cu(char* ,char*);
int main(void)
{
	char a1[256],a2[256];
	int mojisu;
	printf("•¶Žš—ñH");
	scanf("%s", a1);
	cu(a1,a2);
	printf("•¶Žš—ñ‚Q%s",a2);
}


void cu(char *a1,char *a2)
{
	int i=0 ,j;
	while (*(a1+i+1)!='\0')
	{
		i++;
	}
	for (j = 0; i >= 0; i--, j++)
	{
		*(a2 + j) = *(a1 + i);
		printf("%c %c\n", *(a1+ i), *(a2 + j));
	}
	*(a2 + j) = '\0';
}