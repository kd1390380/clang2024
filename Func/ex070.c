#include <stdio.h>
int add(int,int);
int main(void) 
{
	int a, b,c;
	printf("2�̐���=");
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("���v��%d�ł�",c);
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}