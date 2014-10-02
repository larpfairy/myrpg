#include <iostream>
#include "Player.h"
#include "Attributes.h"
#include "Story1.h"
#include "Combat.h"

using namespace std;
using namespace FutureStory;
using namespace AllCombat;

	string NAME;
	string PLAYERCLASS;
	string WEAPONNAME;
	int STR, DEX, INT, CON;
	int SMOD, DMOD, IMOD, CMOD;
	int ARMOR = 0;
	int WEAPON = 0;
	int HEALTH = 0;
	int EXPERIENCE = 0;
	int LEVEL = 1;


	int main()
	{
		Player Playerobject;
		Playerobject.setname();
		NAME = Playerobject.getname();
		Playerobject.setclass();
		PLAYERCLASS = Playerobject.getclass();
		Attributes AttributesObject;
		AttributesObject.SetAttributes(&STR, &DEX, &INT, &CON, PLAYERCLASS);
		AttributesObject.SetModifiers(&STR, &DEX, &INT, &CON, &SMOD, &DMOD, &IMOD, &CMOD);
		HEALTH = AttributesObject.SetHealth(PLAYERCLASS, &CMOD);
		cout << "Class: " << PLAYERCLASS << endl << endl;
		cout << "Health: " << HEALTH << endl;
		cout << "Experience: " << EXPERIENCE << endl;
		cout << "Level: " << LEVEL << endl;
		system("pause");
		cout << string(50, '\n');
		Story1 StoryObject;
		StoryObject.Sequence1(NAME, PLAYERCLASS, &ARMOR, &WEAPON, INT, DEX, STR);
		WEAPONNAME = Playerobject.getWeaponName(PLAYERCLASS);
		Combat combatObject;
		bool combatResult = combatObject.Encounter(WEAPONNAME, &LEVEL, PLAYERCLASS, &ARMOR, &WEAPON, INT, DEX, STR, &HEALTH, &EXPERIENCE);
		if (bool combatResult = false)
		{
			cout << "Game Over!!! Try Again Next Time :(" << endl;
			return 0;
		}
		cin.get();
		cin.get();

	}