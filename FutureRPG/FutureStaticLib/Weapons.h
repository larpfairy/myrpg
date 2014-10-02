using namespace std;

namespace AllWeapons
{
	class Weapon
	{
	public:
		void ScientistWeapon(int **weapon, int INT);
		void BrawlerWeapon(int **weapon, int STR);
		void SniperWeapon(int **weapon, int DEX);
	private:
		string scientistWeapon = "Alchemist Gloves";
		string brawlerWeapon = "SwitchBlade";
		string sniperWeapon = "Slingshot";
	};
}