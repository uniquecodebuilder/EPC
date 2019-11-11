#pragma once

#include "main_window.h"

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

	static void on_login_clicked(Fl_Widget*, void* v);
	void on_login_clicked_i();

public:

	login_dialog();

	void show();
	void hide();

	void on_login(function<void()> handler);

	string get_login();
	string get_password();

private:
	Fl_Window window;

	Fl_Button btnLgn;
	Fl_Input lgnInp;
	Fl_Input pswInp;

	function<void()> login_handler;
};