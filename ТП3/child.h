#pragma once
#include "parent.h"

class child :public parent {
	string parentName = "Not set";
public:
	void SetPName(string a);
	string GetPName();
	void PrintAll()override;
	void PrintFromFile(fstream& file, string s)override;
};