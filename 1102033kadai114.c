#include <stdio.h>
int main(void)
{
	char str[80];
	int  i=0, j;
	printf("������=");
	scanf("%s", &str);
	while (str[i]!='\0')
		{
			i++;
		}
	printf("������ = %d ����", i);
}
	