#pragma once
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
	
		
	void setTicketS(string& numFlight, string& fio, string& birthday);
	void InToTicket();
	void OutToTicket();
	void booking(Ticket& tik);
	void print();
	void printTicketPerson();
} ;