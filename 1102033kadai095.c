#include <stdio.h>
int main(void)
{
	int c=0,i;
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	printf("zñaÆzñbÌÁZÊðzñcÉi[·é\n");
	printf("zña=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		c += a[i];
	}
	printf("\nv%d   ½Ï%.0f", c, (float)c / i);
	printf("\nzñb=");
	c = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
		c += b[i];
	}
	printf("\nv%d   ½Ï%.0f", c, (float)c / i);
}