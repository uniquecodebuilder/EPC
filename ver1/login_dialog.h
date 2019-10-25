#pragma once
#include <FL/Fl_Window.H>
#include <string>
#include <iostream>
#include <FL/Fl_Button.H>
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>


using namespace std;

class login_dialog
{

public:

	int lgn_win()

	{
		
		Fl_Window win1(400, 200, "Login");
		win1.begin();
		win1.position(400, 300);

		Fl_Button btn1(310, 150, 60, 30, "Login");
		btn1.callback();

		Fl_Input lgn (30, 30, 340, 30);
		lgn.show();

		Fl_Input psw(30, 80, 340, 30);
		lgn.show();
	
		win1.end();
		win1.show();

		return 0;
	
	}

};

