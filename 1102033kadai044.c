#include <stdio.h>
int main(void) {
	int i,a;
	while(1)
	{
		printf("����(-999�ŏI��)");
		scanf("%d", &i);
		if (i== -999)
		{
			break;
		}
		printf("8�i����%o   16�i����%x\n", i, i);
	}
}