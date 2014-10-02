#include <string>
#pragma once
using namespace std;

class Player
{
public:
	void setname();
	string getname();
	void setclass();
	string getclass();
	string getWeaponName(string PLAYERCLASS);
private:
	string name;
	string playerclass;
	int classnumber;
};

