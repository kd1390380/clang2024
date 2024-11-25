#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Skil_Num 3
#define Mob_Num 3


enum BitState
{
	Base = 0,
	Poison = 1 << 0,
	Sleep = 1 << 1,
	Paralysis = 1 << 2,
	Burn = 1 << 3,
	AtkUp = 1 << 4,
	AtkDown = 1 << 5,
	Dead = 1 << 6,
	Atk_Skill = 1 << 7
};

typedef unsigned int UINT;

typedef struct
{
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;

typedef struct 
{
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;

typedef struct
{
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;

typedef struct
{
	Spec sp;
	int rate;
}Mob;

int TurnCount = 0;

void DisplayStatus(Chara);

void BattleMode(Chara*, Mob);

int DisplayMenu(Void);

int SkillMenu(Chara);

int DamageCalc(Spec, Spec);

void BattleMessage(Spec, Spec*);

//void ChangeFlag(UINT*);
//void ClearFlag(UINT*);

int main(int argc,char *argv[])
{
	srand(time(0));


	Chara chara = { "AkiAL",2000,200,100,Base,2000,150,
				//type usemp effect
	   {{"HPñ",		0, 50, 800},
		{"UÍAbv",1, 50, 120 },
		{"óÔÙíñ",2, 20,   0}} };

	Mob mob[Mob_Num] = {
		{"GA",	  700, 150, 800, Poison   |  Atk_Skill, 30},
		{"GB",  1500, 200, 200, Burn     |  Atk_Skill, 30},
		{"{X", 5000, 200,  80, AtkDown  |  Atk_Skill, 10}
	};

	UINT MyState = Base;
	/*ChangeFlag(&MyState);*/
	DisplayStatus(&MyState);
}

void DisplayStatus(Chara c)
{
	printf("****»ÝÌóÔ****\n");
	if (*s & Poison)
	{
		printf("Å\n");
	}
	if (*s & Sleep)
	{
		printf("°\n");
	}
	if (*s & Poison)
	{
		printf("á\n");
	}
	if (*s & Burn)
	{
		printf("Î\n");
	}
	if (*s & AtkUp)
	{
		printf("Uª\n");
	}
	if (*s & AtkDown)
	{
		printf("U«\n");
	}
}

void BattleMode(Chara* c, Mob m)
{

}

int DispplayMenu(void)
{

}

int SkillMenu(Chara c)
{

}

int DamageCalc(Spec sp1, Spec sp2)
{

}

void BattleMessage(Spec sp1, Spec* sp2)
{

}

//void ChangeFlag(UINT* s)
//{
//	int a;
//	while (1)
//	{
//		printf("ÇÌóÔðt^µÜ·©H\n");
//		printf("1:Å 2:° 3:á 4:Î 5:Uª 6:U« 0:I¹>");
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			break;
//		}
//
//		switch (a)
//		{
//		case 1:
//			*s |= Poison;
//			break;
//		case 2:
//			*s |= Sleep;
//			break;
//		case 3:
//			*s |= Paralysis;
//			break;
//		case 4:
//			*s |= Burn;
//			break;
//		case 5:
//			*s |= AtkUp;
//			break;
//		case 6:
//			*s |= AtkDown;
//			break;
//		default:
//			break;
//		}
//	}
//	
//}
//
//void ClearFlag(UINT* s)
//{
//
//}