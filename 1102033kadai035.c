#include <stdio.h>
int main(void) {
	int a;
	printf("�����H:");
	scanf("%d", &a);
	if (a > 0 ) {
		printf("�v���X�ł�");
	}
	else if(a < 0){
		printf("�}�C�i�X�ł�");
	}
	else {
		printf("�O�ł�");
	}
}