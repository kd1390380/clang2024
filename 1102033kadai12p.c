#include <stdio.h>
#include<string.h>
int main(void)
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	int i = 0;
	while (day[i] != NULL)
	{
		puts(day[i]);
		i++;
	}
}