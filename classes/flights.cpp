#include "..\\classes\flights.h"
#include "..\\classes\cities.h"
#include "..\\classes\tickets.h"
#include <iostream>
#include <vector>
using namespace std;


template <class T>
void getValue(string prompt, T& value)
{
	cout << prompt;
	cin >> value;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		
		cout << "Error... try again" << endl;
		cout << prompt;
		
		cin >> value;

	}
	string endLine;
	getline(cin, endLine);
	
}

template <>
void getValue<string>(string prompt, string& value)
{
	cout << prompt;
	getline(cin, value);
	if(value.empty())
		getline(cin, value);
	
	
		
}


Flight::Flight() {
		
	InToFlight();
	
}
Flight::~Flight() {
	//OutToFile();
}

void Flight::addFlight() {
	
	flight f;
			
	int x;
	do {
		getValue("do you want to add Flight? 1 - yes,  0 - no: ", x);
		if (x == 1) {

			bool flag = false;
			do {
				//flag = false;
				getValue("enter number of Flight : ", f.numFlight);
				if (allFlight.count(f.numFlight)) {
					flag = true;
				}
			} while (flag);
			string tempTown;
			getValue("enter Point of Source : ", tempTown);
			f.pointSrc = selectTown(f, tempTown);
			getValue("enter Point of Distination : ", tempTown);
			f.pointDst = selectTown(f, tempTown);
			getValue("enter Date of Flightn : ", f.dateFlight.day);
			getValue("enter Date of Flightn : ", f.dateFlight.month);
			getValue("enter Date of Flightn : ", f.dateFlight.year);
			getValue("enter Time of Up : ", f.timeUp.hour);
			getValue("enter Time of Up : ", f.timeUp.min);
			getValue("enter Time of Up : ", f.timeUp.sec);
			getValue("enter Time of Down : ", f.timeDown.hour);
			getValue("enter Time of Down : ", f.timeDown.min);
			getValue("enter Time of Down : ", f.timeDown.sec);
			getValue("enter Type of Airplane : ", f.typeAirplane);
			getValue("enter Cost of Ticket : ", f.costTicket);
			getValue("enter Count of Seats : ", f.countSeats);

			allFlight[f.numFlight] = f;
		}
	} while (x);
	OutToFile();
}

void Flight::editFlight() {
	if (!allFlight.empty()) {
		Flight::print();
		cout << endl;

		flight f1;
		string edit_flight, exit, button, tempTown;

		getValue("if you changed your mind, if you don't want to change anything, enter yes, or -0-, press wont yo mind, \nif you go go go exit 'enter' : ", exit);
		if (!exit.empty())
			cout << "by by" << endl;
		else {
			cout << "choose number of Flight which edit and other : " << endl << endl;

			bool flag = 0;
			do {
				getValue("enter number of Flight : ", button);

				auto it = allFlight.find(button);

				if ( it!=allFlight.end()) {
					edit_flight = button;
					flag = 1;
				}
				else
					cout << "error try again button " << endl << endl;
			} while (!flag);

			getValue("if you do not edit flight - enter '0'-zero or enter, \n\nif you edit flight - enter new flight  : ", f1.numFlight);
			if (f1.numFlight == "0" || (f1.numFlight).empty()) {
				f1.numFlight = allFlight[edit_flight].numFlight;
			}

			getValue("if you do not edit pointSrc - enter '0' - or enter, \nif you edit pointSrc - enter new pointSrc  : ", tempTown);//--------------------------
			if (tempTown == "0" || tempTown.empty()) {
				f1.pointSrc = allFlight[edit_flight].pointSrc;
			}
			else {
				f1.pointSrc = selectTown(f1, tempTown);
			}
			getValue("if you do not edit pointDst - enter '0' - or enter, \nif you edit pointDst - enter new pointDst  : ", tempTown);
			if (tempTown == "0" || tempTown.empty()) {
				f1.pointDst = allFlight[edit_flight].pointDst;
			}
			else {
				f1.pointDst = selectTown(f1, tempTown);
			}
			getValue("if you do not edit dateFlight - enter '0' - or enter, \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.day);
			if (f1.dateFlight.year == 0) {
				f1.dateFlight.year = allFlight[edit_flight].dateFlight.year;
			}
			getValue("if you do not edit dateFlight - enter '0' - or enter, \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.month);
			if (f1.dateFlight.month == 0) {
				f1.dateFlight.month = allFlight[edit_flight].dateFlight.month;
			}
			getValue("if you do not edit dateFlight - enter '0' - or enter', \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.year);
			if (f1.dateFlight.day == 0) {
				f1.dateFlight.day = allFlight[edit_flight].dateFlight.day;
			}
			getValue("if you do not edit timeUp - enter '0' - or enter, \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.hour);
			if (f1.timeUp.hour == 0) {
				f1.timeUp.hour = allFlight[edit_flight].timeUp.hour;
			}
			getValue("if you do not edit timeUp - enter '0' - or enter, \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.min);
			if (f1.timeUp.min == 0) {
				f1.timeUp.min = allFlight[edit_flight].timeUp.min;
			}
			getValue("if you do not edit timeUp - enter '0' - or enter, \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.sec);
			if (f1.timeUp.sec == 0) {
				f1.timeUp.sec = allFlight[edit_flight].timeUp.sec;
			}
			getValue("if you do not edit timeDown - enter '0' - or enter, \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.hour);
			if (f1.timeDown.hour == 0) {
				f1.timeDown.hour = allFlight[edit_flight].timeDown.hour;
			}
			getValue("if you do not edit timeDown - enter '0' - or enter, \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.min);
			if (f1.timeDown.min == 0) {
				f1.timeDown.min = allFlight[edit_flight].timeDown.min;
			}
			getValue("if you do not edit timeDown - enter '0' - or enter, \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.sec);
			if (f1.timeDown.sec == 0) {
				f1.timeDown.sec = allFlight[edit_flight].timeDown.sec;
			}
			getValue("if you do not edit typeAirplane - enter '0' - or enter, \nif you edit typeAirplane - enter new typeAirplane  : ", f1.typeAirplane);
			if (f1.typeAirplane == "0" || (f1.typeAirplane).empty()) {
				f1.typeAirplane = allFlight[edit_flight].typeAirplane;
			}
			getValue("if you do not edit costTicket - enter '0' - or enter, \nif you edit costTicket - enter new costTicket  : ", f1.costTicket);
			if (f1.costTicket == 0) {
				f1.costTicket = allFlight[edit_flight].costTicket;
			}
			getValue("if you do not edit countSeats - enter '0' - or enter, \nif you edit countSeats - enter new countSeats  : ", f1.countSeats);
			if (f1.countSeats == 0) {
				f1.countSeats = allFlight[edit_flight].countSeats;
			}
			//allFlight.erase(allFlight.find(edit_flight));
			allFlight.erase(edit_flight);
			allFlight[f1.numFlight] = f1;

			cout << endl;
		}
	}
	else {
		cout << "empty" << endl;
	}
	OutToFile();
}


string Flight::selectTown(flight& f, string& tt) {
	
	do {
		nnn = town.getCity();
		nn.insert(nnn.begin(), nnn.end());
		auto it = nn.find(tt);
		if (it != nn.end()) {
			return tt;
		}
		else {
			getValue("Town is default .... try again, enter city : ", tt);
		}
	} while (true);
}

void Flight::delFlight() {

	string del_flight;
	Flight::print();
	getValue("select Flight what you want delete : ", del_flight);
	allFlight.erase(del_flight);
	OutToFile();
}

void Flight::print() {
	for (auto it = allFlight.begin(); it != allFlight.end(); ++it) {
		cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
			<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.day << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.year << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
			<< endl << "\t" << (it->second).timeDown.hour << " : "  << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
			<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;
	}
	system("pause");
}

void Flight::OutToFile() {
	ofstream ft("..\\db\\flights.txt");
	if (!allFlight.empty()) {
		for (auto it = allFlight.begin(); it != allFlight.end(); ++it) {
			ft << it->first << endl;
			ft << (it->second).numFlight << endl;
			ft << (it->second).pointSrc << endl;
			ft << (it->second).pointDst << endl;
			ft << (it->second).dateFlight.day << endl;
			ft << (it->second).dateFlight.month << endl;
			ft << (it->second).dateFlight.year << endl;
			ft << (it->second).timeUp.hour << endl;
			ft << (it->second).timeUp.min << endl;
			ft << (it->second).timeUp.sec << endl;
			ft << (it->second).timeDown.hour << endl;
			ft << (it->second).timeDown.min << endl;
			ft << (it->second).timeDown.sec << endl;
			ft << (it->second).typeAirplane << endl;
			ft << (it->second).costTicket << endl;
			ft << (it->second).countSeats << endl;
		}
	}
	else
		cout << "emptyOut" << endl;
	ft.close();
}

void Flight::InToFlight() {
	flight* f;
	ifstream ft("..\\db\\flights.txt");

	if (ft) {
		while (!ft.eof()) {
			f = new flight;
			flight* ff;
			string x;
			ft >> x;
			if (!x.empty()) {

				ft >> f->numFlight;
				ft >> f->pointSrc;
				ft >> f->pointDst;
				ft >> f->dateFlight.day;
				ft >> f->dateFlight.month;
				ft >> f->dateFlight.year;
				ft >> f->timeUp.hour;
				ft >> f->timeUp.min;
				ft >> f->timeUp.sec;
				ft >> f->timeDown.hour;
				ft >> f->timeDown.min;
				ft >> f->timeDown.sec;
				ft >> f->typeAirplane;
				ft >> f->costTicket;
				ft >> f->countSeats;
				ff = f;
				allFlight[ff->numFlight] = *ff;
			}
		}
	}
	else
		cout << "emptyIn" << endl;
	ft.close();
}

void Flight::listUpFlightF()
{
	string upCity;
	auto it = allFlight.begin();
	cout << "enter up city: ";
	cin >> upCity;
	for (it; it != allFlight.end(); ++it) {
		if (it->second.pointSrc == upCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}
void Flight::listDownFlightF() {
	string downCity;
	auto it = allFlight.begin();
	cout << "enter down city: ";
	cin >> downCity;
	for (it; it != allFlight.end(); ++it) {
		if (it->second.pointDst == downCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}
void Flight::listUpDownFlighyF() {
	string upCity, downCity;
	auto it = allFlight.begin();
	cout << "enter up city: ";
	cin >> upCity;
	cout << "enter down city: ";
	cin >> downCity;
	for (it; it != allFlight.end(); ++it) {
		if (it->second.pointDst == downCity && it->second.pointSrc == upCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}

void Flight::printTicketPersonF() {
	Ticket tik;
	tik.printTicketPerson();
	
}

/*
void Flight::printTicketPerson() {
	Ticket listPerson;
	
	
	_tickets_ = listPerson.getTicketS();
	string tempFlight;
	getValue("enter numFlight : ", tempFlight);
	auto it = _tickets_.begin();
	for (it; it != _tickets_.end(); ++it) {
		if (it->first == tempFlight)
			cout << it->first << "\t" << it->second.fio << " : " << it->second.birthday << endl;
		else
			cout << " Flight is default , this Flight nononononononon.... try again" << endl;


	}
}
*/
/*
void Flight::getTicketOut() {
	_tickets_ = listPerson.getTicketS();
}
*/

/*

map<string, Flight::flight> Flight::get_flight() {
	
	return allFlight;
}
*/
/*
multimap<string, passanger> Flight::get_ticket_my() {

	return _tickets_;
}
*/
