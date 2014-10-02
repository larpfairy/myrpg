#include <iostream>
#include <string>
#include "Armors.h"

using namespace std;

namespace AllArmors
{
	void Armor::ScientistClothes(int **ARMOR, int INT)
	{
		cout << "You slap on your shiny lab coat. " << endl;
		**ARMOR = 10 + (INT / 2);
		cout << "Your armor is " << **ARMOR << "." << endl;
		system("pause");
	}
	void Armor::BrawlerClothes(int **ARMOR, int STR)
	{
		cout << "You slap on your makeshift fighter regalia" << endl;
		**ARMOR = 10 + (STR / 2);
		cout << "Your armor is " << **ARMOR << "." << endl;
		system("pause");
	}
	void Armor::SniperClothes(int **ARMOR, int DEX)
	{
		cout << "You slap on some kakis and call it good." << endl;
		**ARMOR = 10 + (DEX / 2);
		cout << "Your armor is " << **ARMOR << "." << endl;
		system("pause");
	}
}