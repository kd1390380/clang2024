#include <stdio.h>
int main(void) {
	int a=-1,s,m,f;
	while(a<0){
		printf("秒数を入力:");
		scanf("%d", &a); 
	}
	if(a <= 5000) {
		s = a % 60;
		m = ((a - s)/60) % 60;
		f = (((a - s)/60) - m)/ 60;
		printf("%d時%d分%d秒です",f,m,s);
	}
	else{
		printf("error");
	}
}