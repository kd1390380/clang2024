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
	printf("名前を入力：");
	gets(p->name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d %d %d", &p->birsth[0], &p->birsth[1], &p->birsth[2]);
	printf("血液型を入力：");
	scanf("%s",p->blood);
	printf("%s--%d年%d月%d日生 血液型ー%s\n",p->name,p->birsth[0],p->birsth[1],p->birsth[2],p->blood);
}


