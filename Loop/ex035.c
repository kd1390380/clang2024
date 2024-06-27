#include <stdio.h>
int main(void)
{
	int i = 0, a;
	while (1)
	{
		printf("”“ü‚ê‚ÄF");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		i += a;
	}
	printf("‡Œv%d", i);
}