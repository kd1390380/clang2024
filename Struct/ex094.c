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
		printf("%d人目 名前を入力：",i+1);
		scanf("%*c%s",(p + i)->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%*c%d %d %d", &(p + i)->birsth[0], &(p + i)->birsth[1], &(p + i)->birsth[2]);
		printf("血液型を入力：");
		scanf("%s", (p + i)->blood);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s--%d年%d月%d日生 血液型ー%s\n", (p + i)->name, (p + i)->birsth[0], (p + i)->birsth[1], (p + i)->birsth[2], (p + i)->blood);
	}
}


