#include <stdio.h>
int main(void) {
	int a,b;
	printf("整数１〜100:");
	scanf("%d", &a);
	if (a >= 90 ) {
		printf("判定結果は5です");
	}
	else if(a>=80 && a<90){
		printf("判定結果は4です");
	}
	else if(a>=50 && a<80){
		printf("判定結果は3です");
	} 
	else if(a>=30 && a<50){
		printf("判定結果は2です");
	}
	else {
		printf("判定結果は1です");
	}
}