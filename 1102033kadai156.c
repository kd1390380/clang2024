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
	int i,b,co=0,str,stp,time1=0,timesum=0;
	a = fopen("mon.data", "w+");
	for (i = 0; i < 10; i++)
	{
		printf("%d‚Â–Ú‚Ì•¶Žš—ñ‚ð“ü—ÍF", i);
		scanf("%s", c);
		fprintf(a,"%s\n", c);
	}
	fclose(a);
	printf("****o‘è‚µ‚Ü‚·****\n");
	srand(time(0));
	rand();
	a=fopen("mon.data", "r");
	for (i = 0; fscanf(a, "%s", d[i].que) != EOF; i++);
	fclose(a);

	for (i = 0; i < 5; i++)
	{
		time1 = 0;
		b=rand() % 10;
		printf("%d–â–Ú", i);
		str = time(0);
		printf("%s     ", d[b].que);
		scanf("%s", d[i].ans);
		stp = time(0);
		time1 = stp - str;
		timesum += time1;
		if (strcmp(d[i].ans, d[b].que) == 0 && time1 <= 5)
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
	printf("³‰ð”%d    ³‰ð—¦%.0f“    ŽžŠÔ%d", co, (float)co/5*100,timesum);

}