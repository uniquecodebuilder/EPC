#pragma once

#include "login_dialog.h"

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

class main_window{

	static void on_exit_clicked(Fl_Widget*, void* v);

	void on_exit_clicked_i();

public:
	main_window();

	void show();
	void hide();

	void on_exit(std::function<void()> handler);

private:
	Fl_Window window;

	Fl_Button btnAdd;
	Fl_Button btnEdit;
	Fl_Button btnDel;
	Fl_Button btnEPC;
	Fl_Button btnPat;
	Fl_Button btnDoc;
	Fl_Button btnExit;
	std::function<void()> exit_handler;
};
 
