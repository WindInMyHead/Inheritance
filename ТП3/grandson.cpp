#include "grandson.h"

void grandson::PrintAll() {
	cout << "Vnuk:" << endl;
	cout << "name: " << this->GetName() << endl;
	cout << "bday: " << this->GetbDay() << endl;
	cout << "city: " << this->GetCity() << endl << endl;
}

void grandson::PrintFromFile(fstream& file, string s) {
	getline(file, s);
	SetName(s);
	getline(file, s);
	SetbDay(s);
	getline(file, s);
	SetCity(s);
}