#include <stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birsth[3];
	char blood[5];
};

int main(void)
{
	struct profile p1[5],*p;
	p = p1;
	for (int i = 0; i < 5; i++)
	{
		printf("%d�l�� ���O����́F",i+1);
		scanf("%*c%s",(p + i)->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%*c%d %d %d", &(p + i)->birsth[0], &(p + i)->birsth[1], &(p + i)->birsth[2]);
		printf("���t�^����́F");
		scanf("%s", (p + i)->blood);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s--%d�N%d��%d���� ���t�^�[%s\n", (p + i)->name, (p + i)->birsth[0], (p + i)->birsth[1], (p + i)->birsth[2], (p + i)->blood);
	}
}


