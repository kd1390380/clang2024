#include <stdio.h>
int main(void)
{
	char str[256];
	// �A��1�s���͂̒�΃p�^�[��
	while (gets(str) != NULL) {
		puts(str);
	}
}