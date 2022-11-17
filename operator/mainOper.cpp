
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <set>
#include "..\\classes\flights.h"
#include "..\\classes\tickets.h"
#include "..\\classes\cities.h"
#include "..\\classes\user.h"


using namespace std;


template <class T>
void getValue(string prompt, T& value);

template <>
void getValue<string>(string prompt, string& value);


//void printTicketPerson();

void main_menu() {

	Flight ff;
	//Ticket listPerson;
	
	

	bool exit = true;
	int press;

	do
	{
		cout << "select  0  -  exit : " << endl;
		cout << "select  1  -  add to flight : " << endl;
		cout << "select  2  -  eddit to flight : " << endl;
		cout << "select  3  -  delete to flight : " << endl;
		cout << "select  4  -  viuwer to list passager in flight : " << endl;

		while (!isdigit(char(cin.peek())))
		{
			system("cls");
			cin.ignore();
			cout << "select  0  -  exit : " << endl;
			cout << "select  1  -  add to flight : " << endl;
			cout << "select  2  -  eddit to flight : " << endl;
			cout << "select  3  -  delete to flight : " << endl;
			cout << "select  4  -  viuwer to list passager in flight : " << endl;
		}
		cin >> press;
		switch (press) {
		case 0:
			cout << "if you want to exit? -- press -- 0, if you continue = press -- 1 : ";;
			cin >> exit;
			break;
		case 1:

			ff.addFlight();
			break;
		case 2:
			ff.editFlight();
			break;
		case 3:
			ff.delFlight();
			break;
		case 4:
			ff.printTicketPersonF();
			system("pause");
			//cout << "ups";
			break;
		
		}
	} while (exit != 0);
}

bool auth() {
	string ulogin, upassw;
	cout << "login: ";
	cin >> ulogin;
	cout << "password: ";
	cin >> upassw;
	
	string login, passw;
	bool isauth = false;
	ifstream fi("..\\db\\users.txt");
	if (fi.is_open()) {
		cout << " open " << endl;
		
		while (!fi.eof()) {
			cout << "!fi" << endl;
			fi >> login;
			if (!login.empty()) {
				cout << "!login" << endl;
				fi >> passw;
				if (ulogin == login && upassw == passw) {
					isauth = true;
					cout << "isauth" << endl;
					return isauth;
				}

			}
			else {
				cout << "erro login empty" << endl;
			}
			//x = "";
		}
	}
	else
		cout << "error file users" << endl;
	
	fi.close();
	cout << "isauth false" << endl;
	return isauth;
}

int main() {
	if (auth()) {
		cout << "gp main_menu" << endl;
		main_menu();
	}
	else
		cout << "error auth" << endl;
	return 0;
}

/*
void printTicketPerson() {
	Ticket listPerson;

	string tempFlight;
	getValue("enter numFlight : ", tempFlight);
	auto it = listPerson.getTicketS().begin();
	for (it; it != listPerson.getTicketS().end(); ++it) {
		if (it->first == tempFlight)
			cout << it->first << "\t" << it->second.fio << " : " << it->second.birthday << endl;
		else
			cout << " Flight is default , this Flight nononononononon.... try again" << endl;


	}
}
*/