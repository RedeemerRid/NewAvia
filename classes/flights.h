#pragma once
#include "..\\classes\cities.h"
#include "..\\classes\tickets.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;





class Flight {
	
	struct date {
		int day;
		int month;
		int year;
	};

	struct times {
		int hour;
		int min;
		int sec;
	};

	struct flight {
		string numFlight;
		string pointSrc;
		string pointDst;
		date dateFlight;
		times timeUp;
		times timeDown;
		string typeAirplane;
		double costTicket;
		int countSeats;
		
	};
	city town;
	
	set<string> nnn;
	set<string> nn;
	map<string, flight> allFlight;
	
		
public:
	Flight();	
	~Flight();
	
	
	void addFlight();
	void editFlight();
	void delFlight();
	void OutToFile();
	void print();
	string selectTown(flight& f, string& tt);
	void InToFlight();

	void  printTicketPersonF();
	//void getTicketOut();
	
	//multimap<string, passanger> get_ticket_my();
	//map<string, flight> get_flight();

	void listUpFlightF();
	void listDownFlightF();
	void listUpDownFlighyF();
	
} ;

