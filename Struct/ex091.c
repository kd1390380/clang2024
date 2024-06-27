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
	printf("–¼‘O‚ð“ü—ÍF");
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d %d %d", &p->birsth[0], &p->birsth[1], &p->birsth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s",p->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%s\n",p->name,p->birsth[0],p->birsth[1],p->birsth[2],p->blood);
}


