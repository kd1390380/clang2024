#include <stdio.h>
int main(void)
{
	char str1[80],str2[80];
	int  i = 0, j = 0;
	printf("文字列1？");
	scanf("%s", &str1);
	printf("文字列2？");
	scanf("%s", &str2);
	while (str1[i] != '\0')
	{
		i++;
	}
	while (str1[i] = str2[j])
	{
		i++;
		j++;
	}
	printf("%s", str1);
}
	