#include <stdio.h>
int main(void) {
	char a;
	int i;
	while(1)
	{
		printf("�����R�[�h(-1�ŏI��)");
		scanf("%d", &i);
		if (i== -1)
		{
			break;
		}
		printf("%c\n", a=i);
	}
}