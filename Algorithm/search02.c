#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int i,c[11],a;
	srand(time(0));
	rand();
	for (i = 0; i < 10; i++)
	{
		c[i] = rand() % 100 + 1;
	}
	printf("data");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	printf("���l����́F");
	scanf("%d",&a);
	i = 0;
	c[10] = a;
	while (c[i] != a)
	{
		i++;
	}
	
	if (i==10)
	{
		printf("������܂���ł���");
	}
	else
	{
		printf("������܂���%d�Ԃł�", i);
	}

}