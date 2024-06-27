#include <stdio.h>
#include<string.h>
int main(void)
{
	FILE* a;
	char b[256], c[256];
	char s;
	a = fopen("text.data", "w");
	if (a == NULL)
	{
		printf("error");
	}
	printf("スケジュールを入力してください(Xで終了)");
	scanf("%[^\n]%*c", b);
	while (strcmp(b,"X"))
	{
		fprintf(a, "%s\n", b);
		scanf("%[^\n]%*c", b);
	}
	fclose(a);


	a = fopen("text.data", "r");
	printf("スケジュールファイルの内容\n");
	while ((fscanf(a, "%[^\n]%*c", c)) != EOF)
	{	
		printf("%s\n", c);
	}
	fclose(a);
	return 0;
}