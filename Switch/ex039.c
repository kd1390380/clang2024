#include <stdio.h>
int main(void)
{
	char d;
	int i = 0, a, b, c, g;
	float h;

	printf("��������́F");
	scanf("%c", &d);

	printf("��������́F");
	scanf("%d %d %d", &a, &b, &c);

	switch (i = d)
	{
		case(0x44):
		case(0x64):
			if (a > b)
			{
				if (a > c)
				{
					printf("�ő�l��%d�ł�", a);
				}
				else
				{
					printf("�ő�l��%d�ł�", c);
				}

			}
			else
			{
				if (b > c)
				{
					printf("�ő�l��%d�ł�", b);
				}
				else
				{
					printf("�ő�l��%d�ł�", c);
				}
			}
			break;
		case(0x53):
		case(0x73):
			if (a < b)
			{
				if (a < c)
				{
					printf("�ŏ��l��%d�ł�", a);
				}
				else
				{
					printf("�ŏ��l��%d�ł�", c);
				}

			}
			else
			{
				if (b < c)
				{
					printf("�ŏ��l��%d�ł�", b);
				}
				else
				{
					printf("�ŏ��l��%d�ł�", c);
				}
			}
			break;
		case(0x47):
		case(0x67):
			printf("���v��%d�ł�", a + b + c);
			break;
		case(0x48):
		case(0x68):
			printf("���ς�%.2f�ł�", h = (float)(a + b + c) / 3);
			break;
		default:
			printf("�G���[");
	}
}