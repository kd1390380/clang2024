#include <stdio.h>
int main(void) {
	int a;
	printf("�������:");
	scanf("%d", &a);
	if (a==2) {
		printf("�ŏI����28���ł�");
	}
	else if(a==11||a==6||a==4||a==9){
		printf("�ŏI����30���ł�");
	}
	else{
		printf("�ŏI����31���ł�");
	}
}