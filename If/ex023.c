#include <stdio.h>
int main(void) {
	int a=-1,s,m,f;
	while(a<0){
		printf("�b�������:");
		scanf("%d", &a); 
	}
	if(a <= 5000) {
		s = a % 60;
		m = ((a - s)/60) % 60;
		f = (((a - s)/60) - m)/ 60;
		printf("%d��%d��%d�b�ł�",f,m,s);
	}
	else{
		printf("error");
	}
}