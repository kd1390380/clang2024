#include <stdio.h>
int main(void)
{
	char a[] = {"orange"};
	int i;
	printf("������:%s\n",a);
	i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	printf("��������%d�ł�",i);
}