#include <stdio.h>
int main(void)
{
	 int c,a=0,b=0;
	printf("����(^z�ŏI��)�H");
	while (scanf("%d", &c) != EOF) {
		a += c;
		b++;
		printf("����(^ z�ŏI��)�H");
	}
	printf("���v��%d ���ρ�%.1f", a, (float)a / b);
}