#include <stdio.h>
#include<string.h>
int cu(char*);
int main(void)
{
	char buf[256];
	int mojisu;
	printf("�����H");
	scanf("%s", buf);
	mojisu = cu(buf);
	printf("��������%d", mojisu);
}


int cu(char *buf)
{
	int a=0;
	while (*buf != '\0')
	{
		a++;
		*buf++;
	}
	return a;
}