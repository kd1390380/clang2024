#include <stdio.h>
#include<string.h>
struct animal
{
	int no;
	char name[20];
	char color[10];
};

int main(void)
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * p = data;
	char a=0;
	while (a != 'X')
	{
		printf("�������j���[(X�̓��͂ŏI��)\n1:�f�[�^�̕\��  2:�f�[�^�̒ǉ�   3:�f�[�^�̌���");
		scanf("%c%*c", &a);
		if (a=='1')
		{
			for (int i=0; i < 50; i++)
			{
				if ((p + i)->no != 0)
				{
					printf("%d %s %s\n", (p + i)->no, (p + i)->name, (p + i)->color);
				}
			}
		}
		if (a=='2')
		{
			int i;
			for (i = 0; (p + i)->no != 0; i++);
			if ((p + i)->no == 0)
			{
				printf("�ԍ�>");
				scanf("%d", &(p + i)->no);
				printf("���O>");
				scanf("%s%*c", (p + i)->name);
				printf("�F>");
				scanf("%s%*c", (p + i)->color);
			}
		}
		if (a=='3')
		{
			char b;
			printf("1:�ԍ�  2:���O  3:�F");
			scanf("%c%*c", &b);
			if (b == '1')
			{
				int c;
				printf("��������ԍ�>");
				scanf("%d%*c",&c);
				for (int i = 0; i < 50; i++)
				{
					if ((p + i)->no != 0)
					{
						if ((p + i)->no == c)
						{
							printf("%d %s %s\n", (p + i)->no, (p + i)->name, (p + i)->color);
						}
					}
				}
			}
			if (b == '2')
			{
				char c[20];
				printf("�������閼�O>");
				scanf("%s%*c",&c);
				for (int i = 0; i < 50; i++)
				{
					if ((p + i)->no != 0)
					{
						if (strcmp((p + i)->name ,c)==0)
						{
							printf("%d %s %s\n", (p + i)->no, (p + i)->name, (p + i)->color);
						}
					}
				}
			}
			if (b == '3')
			{
				char c[20];
				printf("��������F>");
				scanf("%s%*c",&c);
				for (int i = 0; i < 50; i++)
				{
					if ((p + i)->no != 0)
					{
						if (strcmp((p + i)->color , c)==0)
						{
							printf("%d %s %s\n", (p + i)->no, (p + i)->name, (p + i)->color);
						}
					}
				}
			}
		}
	}
	

}