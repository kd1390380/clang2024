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
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &a);
		if (kazu == a)
		{
			printf("³‰ğ  ‰ñ”%d",i);
			break;
		}
		if (kazu > a)
		{
			printf("“ü—Í‚µ‚½”‚æ‚è‘å‚«‚¢‚æ\n");
		}
		else
		{
			printf("“ü—Í‚µ‚½”‚æ‚è¬‚³‚¢‚æ\n");
		}
		i++;
	}
	printf("‚Å‚·");
}