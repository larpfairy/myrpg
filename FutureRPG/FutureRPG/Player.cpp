#include "Player.h"
#include <iostream>

using namespace std;

void Player::setname()
{
	int i = 0;
	while (i == 0)
	{
		cout << "Please enter your name: ";
		cin >> name;
		i++;
	}
}
string Player::getname()
{
	return name;
}
void Player::setclass()
{
	string Classes[3] = { "Scientist", "Brawler", "Sniper" };
	cout << "Please choose a class" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". ";
		cout << Classes[i] << endl;
	}
	int classnumber;
	cin >> classnumber;
	playerclass = Classes[classnumber - 1];
}

string Player::getclass()
{
	return playerclass;
}
string Player::getWeaponName(string PLAYERCLASS)
{
	if (PLAYERCLASS == "Scientist")
	{
		return "Telekinesis Gloves";
	}
	else if (PLAYERCLASS == "Brawler")
	{
		return "Brass Knuckles";
	}
	else
	{
		return "Slingshot";
	}
}