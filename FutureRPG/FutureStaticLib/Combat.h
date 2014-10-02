#include <string>
using namespace std;

namespace AllCombat
{
	class Combat
	{
	public:
		bool Encounter(string WEAPONNAME, int *LEVEL, string PLAYERCLASS, int *ARMOR, int *WEAPON, int INT, int DEX, int STR, int *HEALTH, int *EXPERIENCE);
		string GetEnemyName(int *LEVEL);
		int GetEnemyHealth(string enemyName);
		string GetEnemyWeapon(string enemyName);
		int GetEnemyBaseDamage(string enemyName);
		int GetEnemyArmor(string enemyName);
		int GetEnemyArmorClass(string enemyName);
		int GetEnemyExperience(string enemyName);
	private:
	};
}