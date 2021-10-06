#pragma once
#include<iostream>
#include <fstream>
#include <vector>
#include <string>
#include<Windows.h>

using namespace std;

class parent{
	string name = "Not set";
	string bDay = "Not set";
	string city = "Not set";
public:
	string GetName();
	string GetbDay();
	string GetCity();
	void SetName(string a);
	void SetbDay(string a);
	void SetCity(string a);
	virtual void PrintAll();
	virtual void PrintFromFile(fstream&, string s);
};