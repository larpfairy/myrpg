#include "Attributes.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Attributes::SetAttributes(int *STR, int  *DEX, int  *INT, int  *CON, string playerclass)
{
	srand(time(0));
	*STR = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	*DEX = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	*CON = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	*INT = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	int attarray[4] = { *STR, *DEX, *CON, *INT };
	string attnamearray[4] = { "STR", "DEX", "CON", "INT" };
	cout << "Base Ability Scores: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << attnamearray[i] << ": ";
		cout << attarray[i] << endl;
	}
	cout << "Ability Scores With Class Modifier: " << endl;
	int intelligence = *INT;
	int strength = *STR;
	int dexterity = *DEX;

	if (playerclass == "Scientist")
	{
		*INT = intelligence + 4;
	}
	else if (playerclass == "Brawler")
	{
		*STR = strength + 4;
	}
	else if (playerclass == "Sniper")
	{
		*DEX = dexterity +4;
	}
	int attarray2[4] = { *STR, *DEX, *CON, *INT };
	for (int i = 0; i < 4; i++)
	{
		cout << attnamearray[i] << ": ";
		cout << attarray2[i] << endl;
	}
}
void Attributes::SetModifiers(int *STR, int *DEX, int *INT, int *CON, int *SMOD, int *DMOD, int *IMOD, int *CMOD)
{
	*SMOD = *STR/2;
	*DMOD = *DEX/2;
	*IMOD = *INT/2;
	*CMOD = *CON/2;
}
