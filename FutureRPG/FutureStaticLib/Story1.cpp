#include <iostream>
#include "Story1.h"
#include <string>
#include "Armors.h"

using namespace std;
using namespace AllArmors;

namespace FutureStory
{
	void Story1::Sequence1(string name, string playerclass, int *armor, int *weapon, int INT, int DEX, int STR)
	{
		cout << "Initializing stasis defragmentation..." << endl;
		cout << "Reconstructing physical framework..." << endl;
		cout << "Welcome back " << name << ". Due to hazardous circumstances you have been taken out of stasis." << endl;
		cout << "You drag your limp body off of the stasic table and are now standing within an empty 10x10 foot room." << endl;
		cout << "Your belongings are stuffed into a CHEST in the corner." << endl;
		cout << "There is a DOOR leading to a hallway to the North." << endl;
		int i = 0;
		string input;
		while (i != 1)
		{
			cout << "What would you like to do?" << endl;
			cin >> input;
			if ((input == "chest") || (input == "Chest"))
			{
				if (playerclass == "Brawler")
				{
					Armor ArmorObject;
					ArmorObject.BrawlerClothes(&armor, STR);
				}
				else if (playerclass == "Scientist")
				{
					Armor ArmorObject;
					ArmorObject.ScientistClothes(&armor, INT);
				}
				else if (playerclass == "Sniper")
				{
					Armor ArmorObject;
					ArmorObject.SniperClothes(&armor, DEX);
				}
				i++;
			}
			else if ((input == "door") || (input == "Door"))
			{
				i++;
			}
			else
			{
				cout << "I don't understand you. ";
			}
		}
	}
}