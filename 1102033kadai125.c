#include <stdio.h>
int main(void) {
	int a[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pa;
	pa = a;
	printf("ポインタ固定\n配列data=");
	for (int i = 0; *(pa + i) != -999; i++)
	{
		printf("%d " ,* (pa + i));
	}
	printf("\nポインタ変化\n配列data=");
	for (pa = a; *pa != -999; *pa++)
	{
		printf("%d ", *pa);
	}

		

	
}