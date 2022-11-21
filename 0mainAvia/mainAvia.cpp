// Ulbashev Aslan ,  Musukov Ruslan

#include <iostream>

using namespace std;

int main() {

	bool exit = true;
	int press;

	do
	{
		cout << "select  0  -  exit : " << endl;
		cout << "Select Who are you ----  select \n -1 - Admin \n -2 - Operator \n -3 - Users \n  select : " ;

		while (!isdigit(char(cin.peek())))
		{
			system("cls");
			cin.ignore();
			cout << "select  0  -  exit : " << endl;
			cout << "Select Who are you ----  select \n -1 - Admin \n -2 - Operator \n -3 - Users \n  select : ";
		}
		cin >> press;
		switch (press) {
			
			case 0:
				cout << "if you want to exit? -- press -- 0, \n if you continue press -- 1 : ";
				cin >> exit;
				break;
			case 1:
				cout << system("..\\x64\\Debug\\admin.exe");
				break;
			case 2:
				cout << system("..\\x64\\Debug\\operator.exe");
				break;
			case 3:
				cout << system("..\\x64\\Debug\\user.exe");
				break;
			}
	} while (exit != 0);

}