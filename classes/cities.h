#pragma once
//  ---   Ulbashev Aslan -------------------------------------
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
	//  ---   Ulbashev Aslan -------------------------------------
	void addCity();  //Ulbashev Aslan - Edlov Evgenii
	void editCity();   //Ulbashev Aslan - Kardanova Radima
	void delCity();  //Edlov Evgenii 
	void save();//Edlov Evgenii
	
	void inToFileC();   //Ulbashev Aslan
	set<string> getCity(); //Edlov Evgenii
	~city();
};