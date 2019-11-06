#pragma once
#include <string>
#include <iostream>
#include <functional>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>

using namespace std;

class login_dialog {

	/*static void on_login_clicked(Fl_Widget*, void* v)
	{
		((login_dialog*)v)->on_login_clicked_i();
	}

	void on_login_clicked_i()
	{
		cout << "login dialog exit\n";
		main_window();
	}*/

public:
	login_dialog()
		: window(400, 200, "Policlinic #1"),
		btnLgn(310, 145, 60, 30, "Login"),
		lgnInp(30, 30, 340, 30),
		pswInp(30, 80, 340, 30)
	{

		window.position(400, 300);
		//btnLgn.callback();

		window.end();
	}

	void show()
	{
		window.show();
	}

	void hide()
	{
		window.hide();
	}

	/*void on_login(function<void()> handler)
	{
		main_window = handler;
	}*/

private:
	Fl_Window window;

	Fl_Button btnLgn;
	Fl_Input lgnInp;
	Fl_Input pswInp;

	//string lgn;
	//string psw;
	//function<void()> main_window;
};