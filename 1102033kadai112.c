#include <stdio.h>
int main(void)
{
	char str1[80],str2[80];
	int  i, j;
	printf("(コピー元)配列 data1[]=");
	scanf("%s", &str1);
	i = 0;
	printf("(コピー)配列 data2[]=");
	while (str2[i]=str1[i])
		{
			printf("%c",str2[i]);
			i++;
		}
}
	