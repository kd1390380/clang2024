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
	struct profile p1;
	printf("���O����́F");
	gets(p1.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d %d %d", &p1.birsth[0], &p1.birsth[1], &p1.birsth[2]);
	printf("���t�^����́F");
	scanf("%s",p1.blood);
	printf("%s--%d�N%d��%d���� ���t�^�[%s\n",p1.name,p1.birsth[0],p1.birsth[1],p1.birsth[2],p1.blood);
}


