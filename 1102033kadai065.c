#include <stdio.h>
int main(void) {
	int i=0, j=-1,a=0;
	float b;
	do
	{
		a += i;
		j++;
		printf("	����(-999�ŏI��)�H");
		scanf("%d", &i);
	} while (i != -999);
	b = (float)a / j;
	printf("���v��%d\n���ρ�%f", a, b);
}
	