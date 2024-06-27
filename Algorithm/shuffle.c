#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int i, target,c[20],work;
	for (i = 0; i < 20; i++)
	{
		c[i] = i + 1;
	}
	srand(time(0));
	rand();
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		while (i == target)
		{
			target = rand() % 20;
		}
		work = c[i];
		c[i] = c[target];
		c[target] = work;

		
		//printf("%d %d %d %d\n", i, c[i], target, c[target]);
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", c[i]);
	}
}