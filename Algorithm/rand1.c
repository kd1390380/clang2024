#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kazu;
	srand(time(0));
	rand();
	kazu = rand();
	printf("発生した乱数は%dです", kazu);
}