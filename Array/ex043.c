#include <stdio.h>
int main(void)
{
	char a[] = {"orange"};
	int i;
	printf("文字列:%s\n",a);
	i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	printf("文字数は%dです",i);
}