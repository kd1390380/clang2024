#include <stdio.h>
int main(void) {
	int a;
	printf("数を入れて");
	scanf("%d" ,& a);
	while(a > 0)
	{
		printf("*");
		a--;
	}
}