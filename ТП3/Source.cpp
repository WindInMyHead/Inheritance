#include"grandson.h"

int checkEnter(int vl, istream& cin) {//проверка корректности ввода
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	while (cin.fail()) {
		cin.clear();
		cin.ignore(64, '\n');
		SetConsoleTextAttribute(handle, 4);
		cout << "Retry: ";
		SetConsoleTextAttribute(handle, 7);
		cin >> vl;
	}
	return vl;
}

int main() {
	parent *Ded = new parent;
	child* Mom = new child;
	grandson *Vnuk = new grandson;

	int a = 1, a1 = 1;
	while (a) {
		string b;
		int c;
		fstream  file;
		file.open("f.txt");
		if (!file.is_open()) {
			cout << "Error file!";
			return -1;
		}
		cout << "1.Enter or edit data" << endl;
		cout << "2.Print data. " << endl;
		cout << "3.Read on file. " << endl;
		cout << "0.Exit." << endl;
		cout << "You entered: ";
		cin >> c;
		c = checkEnter(c, cin);
		switch (c) {
		case 1:
		{
			while (a1) {
				int c1;
				cout << "1.Parent data. " << endl;
				cout << "2.Child data. " << endl;
				cout << "3.GrandSon data. " << endl;
				cout << "0.Exit" << endl;
				cin >> c1;
				c1 = checkEnter(c1, cin);
				switch (c1) {
				case 1:
				{
					cout << "Enter name (LastName_Name_LastLastName): ";
					cin >> b;
					file << "Parent" << endl << b << endl;
					Ded->SetName(b);
					Mom->SetPName(b);
					cout << "bDay (DD.MM.YYYY): ";
					cin >> b;
					file << b << endl;
					Ded->SetbDay(b);
					break;
				}
				case 2:
				{
					cout << "LastName_Name_LastLastName: ";
					cin >> b;
					file << "Child" << endl << b << endl << Mom->GetPName() << endl;
					Mom->SetName(b);
					cout << "bDay (DD.MM.YYYY): ";
					cin >> b;
					file << b << endl;
					Mom->SetbDay(b);
					break;
				}
				case 3:
				{
					cout << "LastName_Name_LastLastName: ";
					cin >> b;
					file << "Grandson" << endl << b << endl;
					Vnuk->SetName(b);
					cout << "bDay (DD.MM.YYYY): ";
					cin >> b;
					file << b << endl;
					Vnuk->SetbDay(b);
					cout << "City: ";
					cin >> b;
					file << b;
					Vnuk->SetCity(b);
					break;
				}
				case 0:
					a1 = 0;
					break;
				default:
					cout << "Incorrectly number, retry: ";
					break;
				}
			}
			a1 = 1;
			break;
		}
		case 2:
		{
			Ded->PrintAll();
			Mom->PrintAll();
			Vnuk->PrintAll();
			break;
		}
		case 3:
		{
			string readFile;
			while (!file.eof()) {
				getline(file, readFile);
				if (readFile == "Parent") {
					Ded->PrintFromFile(file, readFile);
				}
				if (readFile == "Child") {
					Mom->PrintFromFile(file, readFile);
				}
				if (readFile == "Grandson") {
					Vnuk->PrintFromFile(file, readFile);
				}
			}
			cout << "Complete!" << endl;
			break;
		}
		case 0:
			file.close();
			a = 0;
			break;
		}
	}
	return 0;
}