#include<stdio.h>

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier*, char*);
void Display(Soldier);

int main(void)
{
	Soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
	return 0;
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r"))
	{
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else
	{
		printf("�G���[");
	}
}

void Display(Soldier s)
{
	printf("���O�F%s  �̗́F%d\n", s.name, s.hp);
	printf("����F%s  �c�e���F%d  �U���́F%f", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}