#include <stdio.h>
int main(void)
{
	FILE* fp;
	char str[256];
	int i;
	fp = fopen("file01.txt", "r");
	for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s",str);
		printf("%d:%s\n",i+1,str);
	}
	fclose(fp);
}