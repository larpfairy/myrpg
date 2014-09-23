#include <iostream>
#include <string>
#include "Story.h"

using namespace std;


void Story::sequence1(string name, string playerclass)
{
	string input;
	cout << "Initializing stasis defragmentation..." << endl;
	cout << "Reconstructing physical framework..." << endl;
	cout << "Welcome back " << name << ". Due to hazardous circumstances you have been taken out of stasis." << endl;
	cout << "You drag your limp body off of the stasic table and are now standing within an empty 10x10 foot room." << endl;
	cout << "Your belongings are stuffed into a chest in the corner" << endl;
	cout << "There is a door leading to a hallway to the North" << endl;
	int i = 0;
	while (i = 0)
	{
		cout << "What would you like to do?" << endl;
		cin >> input;
		if (input == "chest" || "Chest")
		{
			i++;
		}
		else if (input == "door" || "Door")
		{
			i++;
		}
		else
		{
			cout << "I dont understand you." << endl;
		}
		return;
	}


}
