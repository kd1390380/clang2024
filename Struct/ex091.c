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
	struct profile p1,*p;
	p = &p1;
	printf("���O����́F");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d %d %d", &p->birsth[0], &p->birsth[1], &p->birsth[2]);
	printf("���t�^����́F");
	scanf("%s",p->blood);
	printf("%s--%d�N%d��%d���� ���t�^�[%s\n",p->name,p->birsth[0],p->birsth[1],p->birsth[2],p->blood);
}


