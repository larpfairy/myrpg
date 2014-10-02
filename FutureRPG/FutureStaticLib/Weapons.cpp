#include <iostream>
#include <string>
#include "Weapons.h"

using namespace std;

namespace AllWeapons
{
	void Weapon::ScientistWeapon(int **WEAPON, int INT)
	{
		cout << "You put on your Alchemist Gloves" << endl;
		**WEAPON = 10 + INT / 2;
		cout << "Your base attack is " << **WEAPON << " ." << endl;
		system("pause");
	}
	void Weapon::BrawlerWeapon(int **WEAPON, int STR)
	{
		cout << "You put on your Brass Knuckles" << endl;
		**WEAPON = 10 + STR / 2;
		cout << "Your base attack is " << **WEAPON << " ." << endl;
		system("pause");
	}
	void Weapon::SniperWeapon(int **WEAPON, int DEX)
	{
		cout << "You grab your trusty Slingshot." << endl;
		**WEAPON = 10 + DEX / 2;
		cout << "Your base attack is " << **WEAPON << " ." << endl;
		system("pause");
	}
}