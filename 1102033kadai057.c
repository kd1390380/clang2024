#include <stdio.h>
int main(void) {
	char i ,a ;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for ( i = a - 0x1f; i <= 0x5a; i++)
	{
		printf("%c ",i);
	}

}