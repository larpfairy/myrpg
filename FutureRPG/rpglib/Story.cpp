#include <iostream>
#include "Story.h"

using namespace std;

namespace StoryLine
{

	void Story::Sequence1(string name, string playerclass)
	{
		string input;
		cout << "Initializing stasis defragmentation..." << endl;
		cout << "Reconstructing physical framework..." << endl;
		cout << "Welcome back " << name << ". Due to hazardous circumstances you have been taken out of stasis." << endl;
		cout << "You drag your limp body off of the stasic table and are now standing within an empty 10x10 foot room." << endl;
		cout << "Your belongings are stuffed into a CHEST in the corner." << endl;
		cout << "There is a DOOR leading to a hallway to the North." << endl;
		int i = 0;
		while (i != 1)
		{
			cout << "What would you like to do?" << endl;
			cin >> input;
			if ((input == "chest") || (input == "Chest"))
			{
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