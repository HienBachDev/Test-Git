#include "Header.h"
#include <fstream>

int main();
int count_login;
void login() {
	// int count_login;
	string userID, password, id, pass;
	system("cls");
	cout << "\t\t\tPlease enter the username and password " << endl;
	cout << "\t\t\tUsername: ";
	cin >> userID;
	cout << "\t\t\tPassword: ";
	cin >> password;

	ifstream input("record.txt");
	while (input >> id >> pass) {
		if (id == userID && pass == password) {
			count_login = 1;
			system("cls");
		}
		input.close();

		if (count_login == 1) {
			cout << userID << "\nYour Login is successfull" << endl;
			main();
		}
		else{
			cout << "\nLOGIN ERROR\nPlease check your username or Password" << endl;
			main();
		}
	}
}