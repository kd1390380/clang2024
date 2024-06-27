#include <stdio.h>
int main(void)
{
	char str[256];
	// 連続1行入力の定石パターン
	while (gets(str) != NULL) {
		puts(str);
	}
}