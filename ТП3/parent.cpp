#include "parent.h"
//геттеры
string parent::GetName() {
	return this->name;
}

string parent::GetbDay() {
	return this->bDay;
}

string parent::GetCity(){
	return this->city;
}
//cеттеры
void parent::SetName(string a) {
	this->name = a;
}

void parent::SetbDay(string a) {
	this->bDay = a;
}

void parent::SetCity(string a) {
	this->city = a;
}

void parent::PrintAll() {
	cout << "Parent:" << endl;
	cout << "name: " << name << endl;
	cout << "bday: " << bDay << endl << endl;
}

void parent::PrintFromFile(fstream& file, string s){
	getline(file, s);
	SetName(s);
	getline(file, s);
	SetbDay(s);
}