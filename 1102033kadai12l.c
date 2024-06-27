#include <stdio.h>
int main(void)
{
	char c[50];
	char* pc;
	int i = 0;
	pc = c;
	printf("•¶Žš—ñ=");
	scanf("%[^\n]%*c", pc);
	while (*pc)
	{
		if (*pc == ' ')
		{
			i++;
			*pc++;
			continue;
		}
		i++;
		*pc++;
	}
	printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í%d•¶Žš‚Å‚·", i);
}