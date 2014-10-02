#include <iostream>
#include <string>
#include "Weapons.h"

using namespace std;

namespace AllWeapons
{
	void Weapon::ScientistWeapon(int **weapon, int INT)
	{
		cout << "You put on your Alchemist Gloves" << endl;
		**weapon = 10 + INT/2;
		cout << "Your base attack is " << **weapon << " ." << endl;
		system("pause");
	}
	void Weapon::BrawlerWeapon(int **weapon, int STR)
	{
		cout << "You put on your Brass Knuckles" << endl;
		**weapon = 10 + STR / 2;
		cout << "Your base attack is " << **weapon << " ." << endl;
		system("pause");
	}
	void Weapon::SniperWeapon(int **weapon, int DEX)
	{
		cout << "You grab your trusty sniper rifle." << endl;
		**weapon = 10 + DEX / 2;
		cout << "Your base attack is " << **weapon << " ." << endl;
		system("pause");
	}
}