#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct mondai
{
	char que[21];
	char ans[21];
	char kai;
};

int main(void)
{
	FILE* a;
	struct mondai d[10];
	char c[21];
	int i,b,co=0;
	a = fopen("mon.data", "w+");
	for (i = 0; i < 10; i++)
	{
		printf("%dつ目の文字列を入力：", i);
		scanf("%s", c);
		fprintf(a,"%s\n", c);
	}
	fclose(a);
	printf("****出題します****\n");
	srand(time(0));
	rand();
	a=fopen("mon.data", "r");
	for (i = 0; fscanf(a, "%s", d[i].que) != EOF; i++);
	fclose(a);

	for (i = 0; i < 5; i++)
	{
		b=rand() % 10;
		printf("%d問目", i);
		printf("%s     ", d[b].que);
		scanf("%s", d[i].ans);
		if ((strcmp(d[i].ans, d[b].que) == 0))
		{
			d[i].kai = 't';
		}
		else
		{
			d[i].kai = 'f';
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (d[i].kai == 't')
		{
			co++;
		}
	}
	printf("正解数%d    正解率%.0f％", co, (float)co/5*100);

}