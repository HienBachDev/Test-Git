#include "Header.h"


#define VALUE 10

#if VALUE > 5
	#ifdef B
		#include "registration.h"
		#include "fstream"
	#else
		#include "Emtry.h"
    #endif
#else
	#define A 10
#endif

//extern int a;

int main();

/*
void registration_people::Reconrd_Result() {
	registration_people Res;
	ofstream f1("Record.txt", ios::app);
	f1 << Res.ruserID << " " << Res.rpassword << endl;
}*/

void registration() {
	system("cls");
	registration_people Regis;
	cout << "\t\t\tEnter the username : ";
	cin >> Regis.ruserID;
	cout << "\t\t\tEnter the password : ";
	cin >> Regis.rpassword;
	Regis.Reconrd_Result();

	cout << "\n\t\t\t==> Registation is successfull!\n";

	// cin >> a;

	main();
}