using namespace std;

namespace AllWeapons
{
	class Weapon
	{
	public:
		void ScientistWeapon(int **WEAPON, int INT);
		void BrawlerWeapon(int **WEAPON, int STR);
		void SniperWeapon(int **WEAPON, int DEX);
	private:
		string scientistWeapon = "Alchemist Gloves";
		string brawlerWeapon = "SwitchBlade";
		string sniperWeapon = "Slingshot";
	};
}