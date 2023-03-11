#pragma once
#include "Header.h"
#include <fstream>


//typedef



class registration_people {
	public:
		string ruserID, rpassword, rID, rpass;
		void Reconrd_Result();
};



void registration_people::Reconrd_Result() {
	registration_people Res;
	ofstream f1("Record.txt", ios::app);
	f1 << Res.ruserID << " " << Res.rpassword << endl;
}




