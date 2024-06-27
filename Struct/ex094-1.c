#include <stdio.h>
#include<string.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day data;
	char blood[5];
};

int main(void)
{
	struct profile p1[5] = { {"aa",2006,3,23,"a"},{"bb",2004,2,15,"b"},{"cc",2006,1,23,"o"},{"dd",2005,8,10,"ab"},{"ee",2004,2,23,"b"}}, * p;
	p = p1;
	for (int i = 0; i < 5; i++)
	{
		if ((p + i)->data.tuki == 2)
		{
			printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%s\n", (p + i)->name, (p + i)->data.nen, (p + i)->data.tuki, (p + i)->data.hi, (p + i)->blood);
		}
	}
}


