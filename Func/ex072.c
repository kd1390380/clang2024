#include <stdio.h>
void display(int);
int main(void)
{
	int a;
	printf("data?");
	scanf("%d", &a);
	display(a);
}

void display(int b)
{
	printf("入力データ=%d", b);
}