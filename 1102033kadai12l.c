#include <stdio.h>
int main(void)
{
	char c[50];
	char* pc;
	int i = 0;
	pc = c;
	printf("������=");
	scanf("%[^\n]%*c", pc);
	while (*pc)
	{
		if (*pc == ' ')
		{
			i++;
			*pc++;
			continue;
		}
		i++;
		*pc++;
	}
	printf("���͂��ꂽ�������%d�����ł�", i);
}