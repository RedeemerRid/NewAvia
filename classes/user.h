#pragma once
//Ulbashev Aslan  -------------------//  
#include <map>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class users {
	map<string, string> m_users;
	const string m_filename = "..\\db\\users.txt";
public:
	users();       //Ulbashev Aslan  -------------------//  
	void adduser();  //Ulbashev Aslan - Edlov Evgenii
	void deluser();  //Kardanova Radima - Ulbashev Aslan
	void edituser(); //Ulbashev Aslan - Edlov Evgenii
	void viewuser();  //Kardanova Radima - Edlov Evgenii
	void saveuser_to_db(map <string, string>); //Ulbashev Aslan
	~users();
};