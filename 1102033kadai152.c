#include <stdio.h>
#include<string.h>
int main(void)
{
	FILE* a;
	char b[256], c[256];
	a = fopen("text.data", "a");
	if (a == NULL)
	{
		printf("error");
	}
	printf("�X�P�W���[������͂��Ă�������(X�ŏI��)");
	scanf("%[^\n]%*c", b);
	while (strcmp(b, "X") == 1)
	{
		fprintf(a, "%s\n", b);
		scanf("%[^\n]%*c", b);
	}
	fclose(a);


	a = fopen("text.data", "r");
	printf("�X�P�W���[���t�@�C���̓��e\n");
	while ((fscanf(a, "%[^\n]%*c", c)) != EOF)
	{	
		printf("%s\n", c);
	}
	fclose(a);
	return 0;
}