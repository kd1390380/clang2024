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
		printf("数を入れて");
		scanf("%d", &a);
		if (kazu == a)
		{
			printf("正解  回数%d",i);
			break;
		}
		if (kazu > a)
		{
			printf("入力した数より大きいよ\n");
		}
		else
		{
			printf("入力した数より小さいよ\n");
		}
		i++;
	}
	printf("です");
}