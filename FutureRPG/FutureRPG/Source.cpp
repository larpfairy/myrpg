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
		StoryObject.Sequence1(name, playerclass);
		cin.get();
		cin.get();

	}