#include <stdio.h>
#include<string.h>
int main(void)
{
	FILE* a;
	char b[256], c[256],d[256];
	a = fopen("text.data", "r");
	if (a == NULL)
	{
		printf("error");
	}
	printf("表示する月を入力してください\n");
	scanf("%s", b);
	while ((fscanf(a, "%[^\n]%*c", c)) != EOF)
	{
		if (strncmp(b, c,2)==0)
		{
			printf("%s\n", c);
		}
	}
	fclose(a);
	return 0;
}
	