#include <stdio.h>
int main(void) {
	int i = 0, a , j;
	printf("数を入れて：");
	scanf("%d", &a);
	for (i = 1 ; i <= 5 ; i++)
	{
		printf("%d ",a*i );
	}
}