#include "..\\classes\flights.h"
#include "..\\classes\tickets.h"
#include "..\\classes\cities.h"

using namespace std;
void listUpFlight(Flight& fly);
void listDownFlight(Flight& fly);
void listUpDownFlighy(Flight& fly);
//void booking();

int main() {
	Ticket tik;
	Flight fly;
	int n;
	do
	{
		system("cls");
		cout << "\thello chel" << endl;
		cout << "you can select number: " << endl;
		cout << "1 - enter up city" << endl;
		cout << "2 - enter down city" << endl;
		cout << "3 - enter up and down city" << endl;
		cout << "4 - booking" << endl;
		cout << "5 - print numFlightPerdov" << endl;
		cout << "0 - exit" << endl;
		cout << ">>>>>>>";
		cin >> n;
		switch (n)
		{
		case 1:
			listUpFlight(fly);
			break;
		case 2:
			listDownFlight(fly);
			break;
		case 3:
			listUpDownFlighy(fly);
			break;
		case 4:
			
			tik.booking(tik);
			break;
		case 5:
			tik.printTicketPerson();
			system("pause");
			break;
		}
	} while (n != 0);
    system("cls");
	return 0;
}

void listUpFlight(Flight& fly) {
	fly.listUpFlightF();
}

void listDownFlight(Flight& fly) {
	fly.listDownFlightF();
}
void listUpDownFlighy(Flight& fly) {
	fly.listUpDownFlighyF();
}
/*
void listUpFlight(Ticket& tk)
{
	string upCity;
	auto it = tk.getFlight().begin();
	cout << "enter up city: ";
	cin >> upCity;
	for (it; it != tk.getFlight().end(); ++it) {
		if (it->second.pointSrc == upCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}

void listDownFlight(Ticket& tk)
{
	string downCity;
	cout << "enter down city: ";
	cin >> downCity;
	for (auto it = tk.getFlight().begin(); it != tk.getFlight().end(); ++it) {
		if (it->second.pointDst == downCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}

void listUpDownFlighy(Ticket& tk)
{
	string upCity, downCity;
	cout << "enter up city: ";
	cin >> upCity;
	cout << "enter down city: ";
	cin >> downCity;
	for (auto it = tk.getFlight().begin(); it != tk.getFlight().end(); ++it) {
		if (it->second.pointDst == downCity && it->second.pointSrc == upCity) {
			cout << it->second.numFlight << endl;
			cout << it->second.pointSrc << endl;
			cout << it->second.pointDst << endl;
			cout << it->second.dateFlight.day << "." << it->second.dateFlight.month << "." << it->second.dateFlight.year << endl;
		}
	}
	system("pause");
}

*/
/*
void booking()
{
	Ticket tik;
	string numFlight, fio, data_birthday;
	cout << "Enter number of flight: ";
	cin >> numFlight;
	cout << "Enter fio: ";
	cin >> fio;
	cout << "Enter birthday: ";
	cin >> data_birthday;
	tik.setTicketS(numFlight, fio, data_birthday);
	cout << "thanks for booking!" << endl;
}

*/
