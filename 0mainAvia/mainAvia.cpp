#include <iostream>

using namespace std;

int main() {
	int x,y;
	cout << "Vibor 1 2 3 :" << endl;
	cin >> x;
	do {
		
		switch (x) {
		case 0:
			cout << "bybyby";
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
		cout << "go 1 exit 0 : ";
		cin >> y;
	} while (y);
	return 0;
}