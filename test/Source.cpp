#include "Header.h"

void registration();
void login();
void forgot();
void exit();

int c_test = 0; // to limit the number enter of customer 


int main() {
	int c;
	
	cout << "\t\t\t_______________________________\n\n\n";
	cout << "\t\t\t     Welcome to login page         \n\n\n";
	cout << "\t\t\t_____________ Menu  ___________\n\n";
	cout << "                                    \n\n";
	cout << "\t| Press 1 to Login            |" << endl;
	cout << "\t| Press 2 to Register         |" << endl;
	cout << "\t| Press 3 to forgot password  |" << endl;
	cout << "\t| Press 4 to Exit             |" << endl;
	cout << "\n\t\t\t Please enter your choice: ";
	cin >> c;
	cout << endl;

	switch (c) {
		case 1:
			login();
			break;
		case 2:
			registration();
			break;
		case 3:
			forgot();
			break;
		case 4:
			exit();
			break;
		default:
			system("cls");
			cout << "Invalid, Please enter again your choice." << "\n";
			c_test++;
			
			if (c_test <= 5)
			{
				main();
			}
			else if (c_test > 5) {
				system("cls");
				cout << "Let's take your card in below. <3";
			}
	}
}