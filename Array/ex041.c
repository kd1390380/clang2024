#include <stdio.h>
int main(void)
{
	int i ;
	float a[3];
	for (i = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f", &a[i]);
	}
	printf("���v��%.2f\n", a[0] + a[1] + a[2]);
	printf("���ς�%.2f", (a[0] + a[1] + a[2]) / 3);	
}