#include <iostream>
#include <string>
#include "..\\classes\user.h"
#include "..\\classes\cities.h"
#include "..\\classes\flights.h"
#include "..\\classes\tickets.h"

using namespace std;


bool isFirstTime() {
	ifstream f("..\\db\\users.txt");
	string login, passw;
	bool firsttime = true;
	while (!f.eof()) {
		f >> login;
		f >> passw;
		if (login == "admin") firsttime = false;
	}
	f.close();
	return firsttime;
}
void addusertofile(string login, string passw) {
	ofstream f("..\\db\\users.txt", ios::app);
	f << login << " " << passw << endl;
	f.close();
}

void firstTime() {
	string login = "admin", passw;
	cout << "enter admin password: ";
	cin >> passw;
	addusertofile(login, passw);
}

bool auth() {
	string ulogin, upassw;
	cout << "login: ";
	cin >> ulogin;
	cout << "password: ";
	cin >> upassw;
	//	upassw = code(upassw);

	ifstream f("..\\db\\users.txt");
	string login, passw;
	bool isauth = false;
	while (!f.eof()) {
		f >> login;
		f >> passw;
		if (login == "admin" && ulogin == login && upassw == passw)
			isauth = true;
	}
	f.close();
	return isauth;
}

void mainMenu() {
	string choise;
	users u;
	city c;
	Flight f;

	do {
		system("cls");

		cout << "1 user: add" << endl;
		cout << "2 user: del" << endl;
		cout << "3 user: edit" << endl;

		cout << "4 city: add" << endl;
		cout << "5 city: del" << endl;
		cout << "6 city: edit" << endl;

		cout << "7 view flight report" << endl;
		cout << "8 view users" << endl;
		cout << "0 exit" << endl;



		cout << "#";
		cin >> choise;

		switch (choise[0])
		{
		case '1': u.adduser();  break;
		case '2': u.deluser(); break;
		case '3': u.edituser(); break;

		case '4': c.addCity(); break;
		case '5': c.delCity(); break;
		case '6': c.editCity(); break;

		case '7':f.print();  break;
		case '8':u.viewuser();  break;
		}

	} while (choise[0] != '0');
}


int main() {
	//users u;
	//city c;
	//Flight f;
	//Ticket t;

	if (isFirstTime())
		firstTime();

	if (auth())
		mainMenu();



	return 0;
}
