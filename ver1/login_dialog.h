#pragma once
#include <FL/Fl_Window.H>
#include <string>
#include <iostream>


using namespace std;


class login_dialog
{


public:
	//open variables or functions

	void show()
	{
		Fl_Window win1(600, 400, "EPC");
		win1.show();
		 
	}

	void login_msg() {
		cout << "Hello" << endl;  
		
	}

	void set_cred (string epc_usr, string epc_psw) {
		lgn = epc_usr;
		psw = epc_psw;
	}

	void get_cred() {

	};

	

private:
	//hidden variables or functions
	string lgn;
	string psw;
};

