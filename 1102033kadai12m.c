#include <stdio.h>
#include<string.h>
int main(void)
{
	char c[128], a[128];
	char* pc, * pa;
	pc = c;
	pa = a;
	printf("•¶Žš—ñ1=");
	scanf("%[^\n]%*c", pc);
	printf("•¶Žš—ñ2=");
	scanf("%[^\n]%*c", pa);
	strcat( pc, pa);
	printf("str1:%s", pc);
}