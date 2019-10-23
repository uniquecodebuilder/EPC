#pragma once
#include <FL/Fl_Window.H>
#include <string>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>
#include <iostream>
#include <FL/Fl_Button.H>
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>

class main_window
{
public:
	int mn_win()
	{
		Fl_Window win2(800, 600, "EPC");
		win2.show();
		win2.position(200, 100);

		Fl_Button btn1(570, 20, 60, 20, "Exit");
		btn1.callback();

		//Fl_Button btn2(20, 20, 60, 20, "Doctor");
		//Fl_Button btn3(100, 20, 60, 20, "Patient");
		//Fl_Button btn4(180, 20, 60, 20, "EPC");

		return Fl::run();
		exit(0);
	}

	

	

};
 
