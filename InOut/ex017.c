#include <stdio.h>
int main(void) {
	float a,b,c,d;
	printf("１つ目の実数:");
	scanf("%f" ,&a);
	printf("２つ目の実数:");
	scanf("%f", &b);
	printf("３つ目の実数:");
	scanf("%f", &c);
	d = a + b + c;
	printf("合計＝%.2f", d);
	printf("平均＝%.2f\n",d/3 );
}