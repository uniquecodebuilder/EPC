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




class main_window{

	static void on_exit_clicked(Fl_Widget*, void* v)
	{
		((main_window*)v)->on_exit_clicked_i();
	}

	void on_exit_clicked_i()
	{
		std::cout << "main window exit\n";
		exit_handler();
	}

public:
	main_window()
	: window(800, 600, "EPC"),
		btnExit(710, 20, 60, 30, "Exit")
	{
		//window.begin();
		window.position(200, 100);

		btnExit.callback(on_exit_clicked, this);

		//Fl_Button btn2(30, 20, 60, 30, "Doctor");
		//btn2.callback();
		//
		//Fl_Button btn3(110, 20, 60, 30, "Patient");
		//btn3.callback();
		//
		//Fl_Button btn4(190, 20, 60, 30, "EPC");
		//btn4.callback();
		//
		//Fl_Button btn5(30, 550, 60, 30, "Add");
		//btn5.callback();
		//
		//Fl_Button btn6(110, 550, 60, 30, "Edit");
		//btn6.callback();
		//
		//Fl_Button btn7(190, 550, 60, 30, "Delete");
		//btn7.callback();

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

	void on_exit(std::function<void()> handler)
	{
		exit_handler = handler;
	}

private:
	Fl_Window window;

	Fl_Button btnExit;
	std::function<void()> exit_handler;
};
 
