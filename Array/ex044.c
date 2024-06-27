#include <stdio.h>
int main(void)
{
	char a[10] = { "banana" }, b[10] = { "peach" }, c[10] = { " " };
	int i;
	printf("•¶Žš1=%s   •¶Žš2=%s\n",a,b);
	i = 0;
	while (c[i] = a[i])
	{
		i++;
	}
	i = 0;
	while (a[i] = b[i])
	{
		i++;
	}
	i = 0;
	while (b[i] = c[i])
	{
		i++;
	}
	printf("•¶Žš1=%s   •¶Žš2=%s\n", &a, &b);
}