#pragma once
#include "child.h"

class grandson :public child {
public:
	void PrintAll()override;
	void PrintFromFile(fstream& file, string s)override;
};
