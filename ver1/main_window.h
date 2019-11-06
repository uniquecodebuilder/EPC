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

using namespace std;




class main_window{

	static void on_exit_clicked(Fl_Widget*, void* v)
	{
		((main_window*)v)->on_exit_clicked_i();
	}

	void on_exit_clicked_i()
	{
		cout << "main window exit\n";
		exit_handler();
	}

public:
	main_window()
	: window(800, 600, "EPC"),
		btnExit(710, 20, 60, 30, "Exit"),
		btnDoc(30, 20, 60, 30, "Doctor"),
		btnPat(110, 20, 60, 30, "Patient"),
		btnEPC(190, 20, 60, 30, "EPC"),
		btnAdd(30, 550, 60, 30, "Add"),
		btnEdit(110, 550, 60, 30, "Edit"),
		btnDel(190, 550, 60, 30, "Delete")
	{
		//window.begin();
		window.position(200, 100);

		btnExit.callback(on_exit_clicked, this);

		//btnDoc.callback();
		
		//btnPat.callback();
	
		//btnEPC.callback();
	
		//btnAdd.callback();
	
		//btnEdit.callback();

		//btnDel.callback();

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

	void on_exit(function<void()> handler)
	{
		exit_handler = handler;
	}

private:
	Fl_Window window;

	Fl_Button btnAdd;
	Fl_Button btnEdit;
	Fl_Button btnDel;
	Fl_Button btnEPC;
	Fl_Button btnPat;
	Fl_Button btnDoc;
	Fl_Button btnExit;
	function<void()> exit_handler;
};
 
