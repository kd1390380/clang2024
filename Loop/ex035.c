#include <stdio.h>
int main(void)
{
	int i = 0, a;
	while (1)
	{
		printf("������āF");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		i += a;
	}
	printf("���v��%d", i);
}