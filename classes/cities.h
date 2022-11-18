#pragma once
#include <map>
#include <set>
#include <iostream>
#include <fstream>
using namespace std;

class city {
	set<string> name_city;
	
	string file_name = "..\\db\\cities.txt";
public:
	city();
	void addCity();  //Potnin Igor
	void editCity();   //Potnin Igor
	void delCity();  //Edlov Evgenii
	void save();//Edlov Evgenii
	
	void inToFileC();   //Potnin Igor
	set<string> getCity(); //Edlov Evgenii -- Musukov Ruslan
	~city();
};