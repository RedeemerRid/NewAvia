#pragma once
#include <map>
#include <string>
#include <fstream>
#include <iostream>
//#include "cities.h"
//#include "flights.h"
//#include "..\\classes\cities.h"
using namespace std;

class users {
	map<string, string> m_users;
	const string m_filename = "..\\db\\users.txt";
public:
	users();
	void adduser();
	void deluser();
	void edituser();
	void viewuser();
	void saveuser_to_db(map <string, string>);
	~users();
};