#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a,b,c;
	srand(time(0));
	rand();
	a = rand() % 3 + 1;
	printf("�p�[ 1 �`���L 2 �O�[ 3 :");
	scanf("%d",&b);
	switch (b)
	{
		case 1:
			printf("�v���C���[�̓p�[");
			break;
		case 2:
			printf("�v���C���[�̓`���L");
			break;
		case 3:
			printf("�v���C���[�̓O�[");
			break;
	}
	printf("\n");
	switch (a)
	{
	case 1:
		printf("CP�̓p�[");
		break;
	case 2:
		printf("CP�̓`���L");
		break;
	case 3:
		printf("CP�̓O�[");
		break;
	}
	printf("\n");
	c = a - b;
	if (c == 0)
	{
		printf("�������ł�");
	}
	else if (c == -1 || c == 2)
	{
		printf("�v���C���[�̏���");
	}
	else
	{
		printf("CP�̏���");
	}

}