#include "Combat.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace AllCombat
{
	bool Combat::Encounter(string WEAPONNAME, int *LEVEL, string PLAYERCLASS, int *ARMOR, int *WEAPON, int INT, int DEX, int STR, int *HEALTH, int *EXPERIENCE)
	{
		cout << string(50, '\n');
		cout << "COMBAT ENCOUNTER                 COMBAT ENCOUNTER" << endl;
		Combat CombatObject;
		string enemyName = CombatObject.GetEnemyName(LEVEL);
		int enemyHealth = CombatObject.GetEnemyHealth(enemyName);
		string enemyWeapon = CombatObject.GetEnemyWeapon(enemyName);
		int enemyBaseDamage = CombatObject.GetEnemyBaseDamage(enemyName);
		int enemyArmor = CombatObject.GetEnemyArmor(enemyName);
		int enemyArmorClass = CombatObject.GetEnemyArmorClass(enemyName);
		int enemyExperience = CombatObject.GetEnemyExperience(enemyName);

		srand(time(0));
		cout << "An enemy has appeared!" << endl;
		system("pause");
		cout << string(50, '\n');
		cout << "It appears to be a " << enemyName << ". Fuck!" << endl;
		cout << string(50, '\n');
		cout << "You go first, What would you like to do?" << endl;
		string combatOptions[2] = { "0. Attack", "1. Defend" };
		string enemyInfo[2] = { "Enemy Name: ", "Health: " };
		cout << enemyInfo[0];
		cout << " " << enemyName << endl;
		cout << enemyInfo[1];
		cout << " " << enemyHealth << endl;
		while (*HEALTH > 0 && enemyHealth > 0)
		{
			for (int i = 0; i < 2; i++)
			{
				cout << combatOptions[i] << endl;
			}
			int combatChoice;
			cin >> combatChoice;
			if (combatChoice == 0)
			{
				cout << "You attack the enemy with your " << WEAPONNAME << "." << endl;
				int roll = (rand() % 20) + (1 + *WEAPON);
				if (roll >= enemyArmorClass)
				{
					cout << roll << ", Your attack hits!!" << endl;
					int damage = rand() % *WEAPON;
					enemyHealth = enemyHealth - damage;
					cout << "You deal " << damage << "!!!" << endl;
				}
				else
				{
					cout << "Your attack missed :/" << endl;
				}
			}
			if (combatChoice == 1)
			{
				cout << "You take a moment to increase your defenses." << endl;
			}
			if (enemyHealth > 0)
			{
				cout << "The enemy is attacking!" << endl;
				cout << enemyName << " is using " << enemyWeapon << "!" << endl;
				int roll = rand() % 20 + 1 + enemyBaseDamage;
				if (roll >= *ARMOR)
				{
					cout << "The attack hits!" << endl;
					*HEALTH = *HEALTH - enemyBaseDamage;
					cout << "You take " << enemyBaseDamage << " damage" << endl;
				}
				else
				{
					cout << "The enemy missed!" << endl;
				}
			}

		}
		if (*HEALTH > 0)
		{
			cout << string(50, '\n');
			cout << "The enemy " << enemyName << " fainted!" << endl;
			cout << "You gained " << enemyExperience << " experience!" << endl;
			*EXPERIENCE += enemyExperience;
			return true;
		}
		else
		{
			return false;
		}
	}



	string Combat::GetEnemyName(int *LEVEL)
	{
		srand(time(0));
		int enemyNumber;
		enemyNumber = rand() % 3 + 1;
		string enemyName;
		if (*LEVEL = 1)
		{
			if (enemyNumber = 1)
			{
				enemyName == "Raider";
				return "Raider";
			}
			else if (enemyNumber = 2)
			{
				enemyName == "Raider Commander";
				return enemyName;
			}
			else if (enemyNumber = 3)
			{
				enemyName == "Space Rat";
				return enemyName;
			}
		}
		else
		{
			cout << "Error passing player level through functions." << endl;
			system("pause");
			return "error";
		}
	}
	int Combat::GetEnemyHealth(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return 10;
		}
		else if (enemyName == "Raider Commander")
		{
			return 12;
		}
		else if (enemyName == "Space Rat")
		{
			return 7;
		}
	}
	string Combat::GetEnemyWeapon(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return "Crowbar";
		}
		else if (enemyName == "Raider Commander")
		{
			return "Assault Rifle";
		}
		else if (enemyName == "Space Rat")
		{
			return "Claws";
		}
	}
	int Combat::GetEnemyBaseDamage(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return 1;
		}
		else if (enemyName == "Raider Commander")
		{
			return 2;
		}
		else if (enemyName == "Space Rat")
		{
			return 1;
		}
	}
	int Combat::GetEnemyArmor(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return 5;
		}
		else if (enemyName == "Raider Commander")
		{
			return 5;
		}
		else if (enemyName == "Space Rat")
		{
			return 2;
		}
	}
	int Combat::GetEnemyArmorClass(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return 20;
		}
		else if (enemyName == "Raider Commander")
		{
			return 25;
		}
		else if (enemyName == "Space Rat")
		{
			return 15;
		}
	}
	int Combat::GetEnemyExperience(string enemyName)
	{
		if (enemyName == "Raider")
		{
			return 10;
		}
		else if (enemyName == "Raider Commander")
		{
			return 25;
		}
		else if (enemyName == "Space Rat")
		{
			return 7;
		}
	}
}