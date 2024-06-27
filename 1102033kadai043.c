#include <stdio.h>
int main(void) {
	char a;
	int i;
	while(1)
	{
		printf("文字コード(-1で終了)");
		scanf("%d", &i);
		if (i== -1)
		{
			break;
		}
		printf("%c\n", a=i);
	}
}