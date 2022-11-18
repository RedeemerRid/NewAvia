#include "..\\classes\tickets.h"
#include "..\\classes\flights.h"
#include "..\\classes\user.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

Ticket::Ticket() { InToTicket(); }
Ticket::~Ticket() {  }

void Ticket::setTicketS(string& numFlight, string& fio, string& birthday) {
	passanger pass;
	pass.fio = fio;
	pass.birthday = birthday;
	_tickets.insert(make_pair(numFlight, pass));
};

void Ticket::print(){
	for (auto it = _tickets.begin(); it != _tickets.end(); ++it) {
		cout << "#######################################################" << endl;
		cout << it->first << endl;
		cout << it->second.fio << endl;
		cout << it->second.birthday << endl;
		cout << "#######################################################" << endl;
	}
}

void Ticket::InToTicket() {
	passanger* t;
	ifstream ft("..\\db\\tickets.txt");
	if (ft) {
		while (!ft.eof()) {
			t = new passanger;
			passanger* tt;
			string x;
			ft >> x;
			if (!x.empty()) {
				ft >> t->birthday;
				ft >> t->fio;
				tt = t;
				_tickets.insert(make_pair(x, *tt));
			}
		}
	}
	else
		cout << "emptyIn" << endl;
	ft.close();
}

void Ticket::OutToTicket() {
	ofstream ft("..\\db\\tickets.txt");
	if (!_tickets.empty()) {
		for (auto it = _tickets.begin(); it != _tickets.end(); ++it) {
			ft << it->first << endl;
			ft << (it->second).fio << endl;
			ft << (it->second).birthday<< endl;			
		}
	}
	else
		cout << "emptyOut" << endl;
	ft.close();
}

void Ticket::printTicketPerson() {
	string tempFlight;
	cout << "enter numFlight : ";
	cin >> tempFlight;
	auto it = _tickets.begin();
	for (it; it != _tickets.end(); ++it) {
		if (it->first == tempFlight)
			cout << it->first << "\t" << it->second.fio << " : " << it->second.birthday << endl;
		//else
		//	cout << " Flight is default , this Flight nononononononon.... try again" << endl;
	}
}

void Ticket::booking(Ticket& tik){
    string numFlight, fio, data_birthday;
	cout << "Enter number of flight: ";
	cin >> numFlight;
	cout << "Enter fio: ";
	cin >> fio;
	cout << "Enter birthday: ";
	cin >> data_birthday;
	tik.setTicketS(numFlight, fio, data_birthday);
	cout << "thanks for booking!" << endl;
	OutToTicket();
}

/*
map<string, Ticket::flight> Ticket::getFlight() {
	Flight fly;
	//_allFlight_ = fly.get_flight();
	auto it = fly.get_flight().begin();
	copy(it, fly.get_flight().end(), inserter(_allFlight, _allFlight.end()));
	//_allFlight.insert(fly.get_flight().begin(), fly.get_flight().end());
	//_allFlight_ = _allFlight;
	return _allFlight;
}

*/
/*
multimap<string, Ticket::passanger> Ticket::getTicketS() {
		
	return _tickets;
}
*/
