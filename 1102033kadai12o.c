#include <stdio.h>
#include<string.h>
int main(void)
{
	char* p = "pointer test program";
	char a[256];
	int i = 0;
	while (*p)
	{
		a[i] = *p++;
		i++;
	}
	printf("�z��save[]=%s", a);
}