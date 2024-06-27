#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int i, c[11], a,low,high;
	srand(time(0));
	rand();
	for (i = 0; i < 10; i++)
	{
		c[i] = rand() % 20 + 1;
		if (i > 0)
		{
			c[i] += c[i - 1];
		}
	}
	printf("data ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n”’l‚ð“ü—ÍF");
	scanf("%d", &a);
	low = 0;
	high = 10;
	while (low <= high)
	{
		i = (low + high) / 2;
		if (c[i] == a)
		{
			printf("Œ©‚Â‚©‚è‚Ü‚µ‚½%d”Ô‚Å‚·", i+1);
			break;
		}
		else if (c[i] > a)
		{
			high = i - 1;
		}
		else
		{
			low = i + 1;
		}
	}
	if (low > high)
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}

}