#include <stdio.h>
int ab(char);
int main(void)
{
	int c;
	char a;
	printf("•¶ŽšF");
	scanf("%c",&a);
	c = ab(a);
	if (c == 0)
	{
		printf("–ß‚è’l‚ª%d‚È‚Ì‚Å“ü—Í‚µ‚½•¶Žš‚Í¬•¶Žš‚Å‚·", c);
	}
	if (c == 1)
	{
		printf("–ß‚è’l‚ª%d‚È‚Ì‚Å“ü—Í‚µ‚½•¶Žš‚Í‘å•¶Žš‚Å‚·", c);
	}
}

int ab(char a)
{
	int z;
	if (a >= 0x41&&a<0x5a)
	{
		z = 1;
	}
	if(a>=0x61&&a<0x7a)
	{
		z = 0;
	}
	return z;
}