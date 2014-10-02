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
	void Container::startingchest(string playerclass, int *armor, int *weapon, int INT, int DEX, int STR)
	{
		cout << "You open the chest and find some of your belonings." << endl;
		cout << "Press the corresponding number to take an item." << endl;
		cout << "Enter 2 to leave chest." << endl;
		if (playerclass == "Brawler")
		{
			string chest[3] = { "0. Brass Knuckles", "1. Kaki's", "2. Exit" };
			int chestnumber;
			Weapon weaponObject;
			Armor armorObject;
			int i = 0;
			while (i == 0)
			{
				cout << string(50, '\n');
				cout << "Please enter the number of an item that you want to take." << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << chest[i] << endl;
				}
				cin >> chestnumber;
				if (chestnumber = 0)
				{
					weaponObject.BrawlerWeapon(&weapon, STR);
					chest[0] = "";
				}
				else if (chestnumber = 1)
				{
					armorObject.BrawlerClothes(&armor, STR);
					chest[1] = "";
				}
				else if (chestnumber = 2)
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

		else if (playerclass == "Scientist")
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
				for (int i = 0; i < 3; i++)
				{
					cout << chest[i] << endl;
				}
				cin >> chestnumber;
				if (chestnumber == 0)
				{
					weaponObject.ScientistWeapon(&weapon, INT);
					chest[0] = " ";
				}
				else if (chestnumber == 1)
				{
					armorObject.BrawlerClothes(&armor, INT);
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
		else if (playerclass == "Sniper")
		{
			cout << string(50, '\n');
			string chest[3] = { "0. Sniper Rifle", "1. Sniper Gear", "2. Exit" };
			int chestnumber;
			Weapon weaponObject;
			Armor armorObject;
			int i = 0;
			while (i == 0)
			{
				cout << "Please enter the number of an item that you want to take." << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << chest[i] << endl;
				}
				cin >> chestnumber;
				if (chestnumber == 0)
				{
					weaponObject.SniperWeapon(&weapon, DEX);
					chest[0] = "";
				}
				else if (chestnumber == 1)
				{
					armorObject.SniperClothes(&armor, DEX);
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