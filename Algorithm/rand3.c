#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kazu;
	srand(time(0));
	rand();
	kazu = rand()%100+1;
	if (kazu <= 30)
	{
		printf("��S�ł�");
	}
	else
	{
		printf("�ʏ�U���ł�");
	}
}