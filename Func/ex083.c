#include <stdio.h>
#include<string.h>
int cu(char*);
int main(void)
{
	char buf[256];
	int mojisu;
	printf("文字？");
	scanf("%s", buf);
	mojisu = cu(buf);
	printf("文字数＝%d", mojisu);
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