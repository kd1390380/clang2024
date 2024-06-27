#include <stdio.h>
int main(void) {
	int a=-1,s,m,f;
	while(a<0){
		printf("•b”‚ð“ü—Í:");
		scanf("%d", &a); 
	}
	if(a <= 5000) {
		s = a % 60;
		m = ((a - s)/60) % 60;
		f = (((a - s)/60) - m)/ 60;
		printf("%dŽž%d•ª%d•b‚Å‚·",f,m,s);
	}
	else{
		printf("error");
	}
}