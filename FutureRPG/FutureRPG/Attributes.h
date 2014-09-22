#include <string>
#pragma once
using namespace std;

class Attributes
{
public:
	void SetAttributes(int *STR, int  *DEX, int  *INT, int  *CON, string playerclass);
	void SetModifiers(int *STR, int *DEX, int *INT, int *CON, int *SMOD, int *DMOD, int *IMOD, int *CMOD);
private:
};

