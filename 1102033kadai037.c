#include <stdio.h>
int main(void) {
	int a,b;
	printf("�����P�`100:");
	scanf("%d", &a);
	if (a >= 90 ) {
		printf("���茋�ʂ�5�ł�");
	}
	else if(a>=80 && a<90){
		printf("���茋�ʂ�4�ł�");
	}
	else if(a>=50 && a<80){
		printf("���茋�ʂ�3�ł�");
	} 
	else if(a>=30 && a<50){
		printf("���茋�ʂ�2�ł�");
	}
	else {
		printf("���茋�ʂ�1�ł�");
	}
}