#include <iostream>
#include <string>
#include "Armors.h"

using namespace std;

namespace AllArmors
{
	void Armor::ScientistClothes(int **armor, int INT)
	{
		cout << "You slap on your shiny lab coat. " << endl;
		**armor = 10 + (INT/2);
		cout << "Your armor is " << **armor << "." << endl;
		system("pause");
	}
	void Armor::BrawlerClothes(int **armor, int STR)
	{
		cout << "You slap on your makeshift fighter regalia" << endl;
		**armor = 10 + (STR / 2);
		cout << "Your armor is " << **armor << "." << endl;
		system("pause");
	}
	void Armor::SniperClothes(int **armor, int DEX)
	{
		cout << "You slap on some kakis and call it good." << endl;
		**armor = 10 + (DEX / 2);
		cout << "Your armor is " << **armor << "." << endl;
		system("pause");
	}
}