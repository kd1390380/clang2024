#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int dice;
	srand(time(0));
	rand();
	
	dice = rand()%6+1;
	printf("�T�C�R����%d�ł�", dice);
}