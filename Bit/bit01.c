#include<stdio.h>

enum BitState
{
	Base = 0,
	Poison = 1 << 0,
	Sleep = 1 << 1,
	Paralysis = 1 << 2,
	Burn = 1 << 3,
	AtkUp = 1 << 4,
	AtkDown = 1 << 5
};

typedef unsigned int UINT;

void DisplayStatus(UINT*);
void ChangeFlag(UINT*);
void ClearFlag(UINT*);

int main(void)
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(&MyState);
}

void DisplayStatus(UINT* s)
{
	printf("****Œ»Ý‚Ìó‘Ô****\n");
	if (*s & Poison)
	{
		printf("“Å\n");
	}
	if (*s & Sleep)
	{
		printf("‡–°\n");
	}
	if (*s & Poison)
	{
		printf("–ƒáƒ\n");
	}
	if (*s & Burn)
	{
		printf("‰Î\n");
	}
	if (*s & AtkUp)
	{
		printf("UŒ‚ª\n");
	}
	if (*s & AtkDown)
	{
		printf("UŒ‚«\n");
	}
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ð•t—^‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
	
}

void ClearFlag(UINT* s)
{

}