#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kazu,i,a;
	srand(time(0));
	rand();
	kazu = rand()%100+1;
	i = 0;
	while(1)
	{
		printf("��������");
		scanf("%d", &a);
		if (kazu == a)
		{
			printf("����  ��%d",i);
			break;
		}
		if (kazu > a)
		{
			printf("���͂��������傫����\n");
		}
		else
		{
			printf("���͂�������菬������\n");
		}
		i++;
	}
	printf("�ł�");
}