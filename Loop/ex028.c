#include <stdio.h>
int main(void) {
	int sum = 0,a;
	printf("��������");
	scanf("%d" ,& a);
	while(a != -999)
	{
		sum += a;
		printf("��������");
		scanf("%d", & a);
	}
	printf("���v��%d", sum);
}