using namespace std;

namespace AllArmors
{
	class Armor
	{
	public:
		void ScientistClothes(int **ARMOR, int INT);
		void BrawlerClothes(int **ARMOR, int STR);
		void SniperClothes(int **ARMOR, int DEX);

	private:
		string scientistclothes = "Scientist Lab Coat";
		string sniperclothes = "Sniper Gear";
		string brawlerclothes = "Brawler Get-Up";
	};
}