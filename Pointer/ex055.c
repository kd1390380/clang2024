#include <stdio.h>
int main(void) {
	int a[6] = {11,22,33,44,55,66},i,sumi=0;
	float b[4] = {11.1,22.2,33.3,44.4},sumf=0,avef=0,avei = 0;
	int* pa;
	float *pb;
	pa = a;
	for (i = 0; i < 6; i++)
	{
		sumi += *pa;
		pa++;
	}
	avei = (float)sumi / i;
	printf("‡Œv%d  •½‹Ï%.3f\n", sumi,avei);
	pb = b;
	for (i = 0; i < 4; i++)
	{
		sumf += *pb;
		pb++;
	}
	avef = sumf / i;
	printf("‡Œv%.3f  •½‹Ï%.3f", sumf, avef);
}