#include <stdio.h>
#include<string.h>
void ab(char*,char*);
int main(void)
{
	char *a = "�֐�",*b="�킩�邩�ȁH";
	printf("�z��Pmoji:%s\n�z��Qmoji:%s", a, b);
	ab(a,b);
	printf("\n�A�����ꂽ��̕�����moji1:%s", a);
}

void ab(char*a,char*b)
{
	strcat(a, b);
}