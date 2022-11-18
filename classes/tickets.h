#pragma once
//Potnin Igor-----------------------------------------------------
#include "..\\classes\tickets.h"
#include "..\\classes\flights.h"
#include "..\\classes\user.h"
#include "flights.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <set>
using namespace std;

class Ticket {
	struct passanger {
		string fio;
		string birthday;
	};
	multimap<string, passanger> _tickets;
public:
	Ticket();
	~Ticket();
	//Potnin Igor ------------------------------------------------------------------------------
	void setTicketS(string& numFlight, string& fio, string& birthday);  //Potnin Igor
	void InToTicket();// Osmanov Alim - Potnin Igor
	void OutToTicket();// Osmanov Alim - Potnin Igor
	void booking(Ticket& tik);//Potnin Igor - Osmanov Alim
	void print(); //Osmanov Alim
	void printTicketPerson();  //Osmanov Alim - Potnin Igor
} ;