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
	printf("名前を入力：");
	gets(p1.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d %d %d", &p1.birsth[0], &p1.birsth[1], &p1.birsth[2]);
	printf("血液型を入力：");
	scanf("%s",p1.blood);
	printf("%s--%d年%d月%d日生 血液型ー%s\n",p1.name,p1.birsth[0],p1.birsth[1],p1.birsth[2],p1.blood);
}


