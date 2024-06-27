#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kazu,i;
	srand(time(0));
	rand();
	kazu = rand()%5+1;
	printf("Ç†Ç»ÇΩÇÃâ^ê®ÇÕ");
	for (i = 1; i <= kazu;i++)
	{
		printf("Åô");
	}
	printf("Ç≈Ç∑");
}