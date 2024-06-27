#include <stdio.h>
int main(void) {
	int i = 0, a , j;
	for (i = 1 ; i <= 10 ; i++)
	{
		a = 0;
		for(j=1;j<=i;j++)
		{
			a += j;
		}
		printf("1‚©‚ç %d‚Ü‚Å‚Ì˜a  %d\n",i,a );
	}
}