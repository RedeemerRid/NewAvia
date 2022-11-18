#pragma once
//Musukov Ruslan ----------------------------------
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
	//city town;
	//set<string> nnn;
	set<string> inCity;
	map<string, flight> allFlight;
public:
	Flight();	
    ~Flight();
	//Musukov Ruslan---------------------------
	void addFlight(); //Musukov Ruslan -- Sokurova Madina
	void editFlight();//Musukov Ruslan -- Gubirov Azamat
	void delFlight();    // Gubirov Azamat -- Sokurova Madina
	void OutToFile();  // Gubirov Azamat -- Musukov Ruslan
	void print();    //Sokurova Madina
	string selectTown(flight& f, string& tt);   // Potnin Igor -- Musukov Ruslan
	void InToFlight(); // Gubirov Azamat -- Sokurova Madina
	void  printTicketPersonF();    // Musukov Ruslan
	void listUpFlightF(); //Potnin Igor - Osmanov Alim
	void listDownFlightF();//Potnin Igor - Osmanov Alim
	void listUpDownFlighyF();//Potnin Igor - Osmanov Alim
} ;

