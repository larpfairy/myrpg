#include <iostream>
#include "Story1.h"
#include <string>
#include "Armors.h"
#include "Containers.h"
#include <string>

using namespace std;
using namespace AllArmors;
using namespace AllContainers;

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
				cout << string(50, '\n');
				Container containerObject;
				containerObject.startingchest(playerclass, armor, weapon, INT, DEX, STR);
				cout << "There is a DOOR leading to a hallway to the North." << endl;
			}
			else if ((input == "door") || (input == "Door"))
			{
				cout << string(50, '\n');
				i++;
			}
			else
			{
				cout << string(50, '\n');
				cout << "I don't understand you. ";
				cout << "Your belongings are stuffed into a CHEST in the corner." << endl;
				cout << "There is a DOOR leading to a hallway to the North." << endl;
			}
		}
	}
}