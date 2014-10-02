#include <iostream>
#include <string>
#include "Containers.h"
#include "Armors.h"
#include "Weapons.h"

using namespace std;
using namespace AllWeapons;
using namespace AllArmors;

namespace AllContainers
{
	void Container::startingchest(string PLAYERCLASS, int *ARMOR, int *WEAPON, int INT, int DEX, int STR)
	{
		cout << "You open the chest and find some of your belonings." << endl;
		cout << "Press the corresponding number to take an item." << endl;
		cout << "Enter 2 to leave chest." << endl;
		if (PLAYERCLASS == "Brawler")
		{
			string chest[3] = { "0. Brass Knuckles", "1. Fighter Regalia", "2. Exit" };
			int chestnumber;
			Weapon weaponObject;
			Armor armorObject;
			int i = 0;
			while (i == 0)
			{
				cout << string(50, '\n');
				cout << "Please enter the number of an item that you want to take." << endl;
				for (int x = 0; x < 3; x++)
				{
					cout << chest[x] << endl;
				}
				cin >> chestnumber;
				if (chestnumber == 0)
				{
					weaponObject.BrawlerWeapon(&WEAPON, STR);
					chest[0] = "";
				}
				else if (chestnumber == 1)
				{
					armorObject.BrawlerClothes(&ARMOR, STR);
					chest[1] = "";
				}
				else if (chestnumber == 2)
				{
					i++;
					cout << string(50, '\n');
				}
				else
				{
					cout << "Try Again" << endl;
				}
			}
		}

		else if (PLAYERCLASS == "Scientist")
		{
			string chest[3] = { "0. Telekinesis Gloves", "1. Lab Coat", "2. Exit" };
			int chestnumber;
			Weapon weaponObject;
			Armor armorObject;
			int i = 0;
			while (i == 0)
			{
				cout << string(50, '\n');
				cout << "Please enter the number of an item that you want to take." << endl;
				for (int x = 0; x < 3; x++)
				{
					cout << chest[x] << endl;
				}
				cin >> chestnumber;
				if (chestnumber == 0)
				{
					weaponObject.ScientistWeapon(&WEAPON, INT);
					chest[0] = " ";
				}
				else if (chestnumber == 1)
				{
					armorObject.ScientistClothes(&ARMOR, INT);
					chest[1] = " ";
				}
				else if (chestnumber == 2)
				{
					i++;
					cout << string(50, '\n');
				}
				else
				{
					cout << "Try Again" << endl;
				}
			}
		}
		else if (PLAYERCLASS == "Sniper")
		{
			cout << string(50, '\n');
			string chest[3] = { "0. Slingshot", "1. Sniper Gear", "2. Exit" };
			int chestnumber;
			Weapon weaponObject;
			Armor armorObject;
			int i = 0;
			while (i == 0)
			{
				cout << "Please enter the number of an item that you want to take." << endl;
				for (int x = 0; x < 3; x++)
				{
					cout << chest[x] << endl;
				}
				cin >> chestnumber;
				if (chestnumber == 0)
				{
					weaponObject.SniperWeapon(&WEAPON, DEX);
					chest[0] = "";
				}
				else if (chestnumber == 1)
				{
					armorObject.SniperClothes(&ARMOR, DEX);
					chest[1] = "";
				}
				else if (chestnumber == 2)
				{
					i++;
					cout << string(50, '\n');
				}
				else
				{
					cout << "Try Again" << endl;
				}
			}
		}
	}
}