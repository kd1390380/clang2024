#include <stdio.h>
int main(void) {
	int i=0,a;
	printf("数を入れて");
	scanf("%d" ,& a);
	while(i <= 10)
	{
		printf("%d + %d = %d\n",a,i,a+i);
		i++;
	}
}