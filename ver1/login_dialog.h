#pragma once
#include <FL/Fl_Window.H>
#include <string>
#include <iostream>
#include <FL/Fl_Button.H>
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>



using namespace std;


class login_dialog
{

public:
	//open variables or functions

	int lgn_win()
	{
		Fl_Window win1(400, 200, "Login");
		win1.show();
		win1.position(400, 300);
	
		return Fl::run();
		exit(0);
	
	}

	


};

