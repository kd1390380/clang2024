#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kazu, i;
	clock_t a, b;
	a = clock();
	i = 1;
	while(i<100)
	{
		b = clock();
		if ((b-a)/CLOCKS_PER_SEC>=1)
		{
			srand(time(0));
			rand();
			kazu = rand() % 300 + 1;
			printf("%d\n", kazu);
			a = b;
			i++;
		}
	}
}