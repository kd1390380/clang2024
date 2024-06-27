#include <stdio.h>
#include<string.h>
int main(void)
{
	FILE* a;
	char b[256], c[256], d[100][256], w[256];
	int i ,s,z;
	a = fopen("text.data", "a");
	if (a == NULL)
	{
		printf("error");
	}
	printf("スケジュールを入力してください(Xで終了)");
	scanf("%[^\n]%*c",b);
	while (strcmp(b, "X"))
	{
		fprintf(a, "%s\n",b);
		scanf("%[^\n]%*c",b);
	}
	fclose(a);

	a = fopen("text.data", "r");
	for (i = 0; fscanf(a, "%[^\n]%*c", d[i]) != EOF; i++);
	for (int j = 0; j < i - 1; j++)
	{
		for (int k = j + 1; k < i; k++)
		{
			if ( ( atoi(d[j]) > atoi(d[k]) ) )
			{
				strcpy(w, d[j]);
				strcpy(d[j], d[k]);
				strcpy(d[k], w);
			}
		}
	}
	fclose(a);

	a = fopen("text.data", "w");
	if (a == NULL)
	{
		printf("error");
	}

	for (int j = 0; j < i; j++)
	{
		fprintf(a, "%s\n", d[j]);
	}
	fclose(a);


	a = fopen("text.data", "r");
	printf("スケジュールファイルの内容\n");
	while (fscanf(a, "%[^\n]%*c", c) != EOF)
	{
		printf("%s\n", c);
	}
	fclose(a);
	return 0;
}