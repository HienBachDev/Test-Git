//#include "Header.h"
#include <fstream>

typedef int usign8;

bool check;
typedef enum {
	Hien,
	Bach
};


void main();

void forgot() {
	usign8 choice, check = 0, count_forgot = 0;
	string ID, idUser, passforgot, password;
	system("cls");
	cout << "\t\t\tEnter your choice: ";
	cin >> choice;

	ifstream f2("record.txt");
	switch (choice) {
		case 1:
			cout << "Please enter your ID: ";
			cin >> ID;
			while (f2 >> idUser >> password) {
				if (ID == idUser) {
					passforgot = password;
					check = 1;
				}
				f2.close();
				// Check to get password again
				if (check == 1) {
					cout << "Take again is successfully! And your password is: "<<passforgot;
				}
				else if(check != 1) {
					for (int i = 0; i < 5; i++) {
						cout << "Your IdUser is not true! Please enter again:" << ID;
						count_forgot++;
						if (i == 6) {
							cout << "Your account is locked temporary. Back to MAIN...";
							main();
						}
					}
				}
			}
		case 2:
			cout << "Back to main Monitoring!";
			main();
		default:
			cout << "Invalid enter again.";
			break;
		}
		forgot();
}