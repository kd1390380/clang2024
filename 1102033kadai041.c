#include <stdio.h>
int main(void) {
	int sum = 0,a,i;
	float av;
	printf("�����i-999�ŏI���j�H");
	scanf("%d" ,& a);
	while(a != -999)
	{
		sum += a;
		printf("�����i-999�ŏI���j�H");
		scanf("%d", & a);
		i++;
	}
	printf("���v��%d", sum);
	printf("���ρ�%.2f", av = (float)sum / i);
}