using namespace std;

namespace AllArmors
{
	class Armor
	{
	public:
		void ScientistClothes(int **armor, int INT);
		void BrawlerClothes(int **armor, int STR);
		void SniperClothes(int **armor, int DEX);

	private:
		string scientistclothes = "Scientist Lab Coat";
		string sniperclothes = "Sniper Gear";
		string brawlerclothes = "Brawler Get-Up";
	};
}