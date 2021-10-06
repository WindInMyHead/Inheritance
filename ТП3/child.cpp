#include "child.h"

void child::SetPName(string a) {
	this->parentName = a;
}

string child::GetPName() {
	return this->parentName;
}

void child::PrintAll() {
	cout << "Child:" << endl;
	cout << "Parent name: " << parentName << endl;
	cout << "Name: " << this->GetName() << endl;
	cout << "bday: " << this->GetbDay() << endl << endl;
}

void child::PrintFromFile(fstream& file, string s) {
	getline(file, s);
	SetName(s);
	getline(file, s);
	SetPName(s);
	getline(file, s);
	SetbDay(s);
}
