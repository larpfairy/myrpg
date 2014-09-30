#include <iostream>
#include "Player.h"
#include "Attributes.h"
#include "Story1.h"

using namespace std;
using namespace FutureStory;

	string name;
	string playerclass;
	int STR, DEX, INT, CON;
	int SMOD, DMOD, IMOD, CMOD;
	int armor = 0;
	int weapon = 0;


	int main()
	{
		Player Playerobject;
		Playerobject.setname();
		name = Playerobject.getname();
		Playerobject.setclass();
		playerclass = Playerobject.getclass();
		Attributes AttributesObject;
		AttributesObject.SetAttributes(&STR, &DEX, &INT, &CON, playerclass);
		AttributesObject.SetModifiers(&STR, &DEX, &INT, &CON, &SMOD, &DMOD, &IMOD, &CMOD);
		cout << "Class: " << playerclass << endl << endl;
		Story1 StoryObject;
		StoryObject.Sequence1(name, playerclass, &armor, &weapon, INT, DEX, STR);
		cout << armor << endl;
		cin.get();
		cin.get();

	}