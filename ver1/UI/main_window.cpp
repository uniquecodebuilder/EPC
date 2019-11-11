#include "main_window.h"

void main_window::on_exit_clicked(Fl_Widget*, void* v)
{
	((main_window*)v)->on_exit_clicked_i();

}

void main_window::on_exit_clicked_i()
{
	cout << "main window exit\n";
	exit_handler();
}

main_window::main_window()
	: window(800, 600, "EPC"),
	btnExit(710, 20, 60, 30, "Exit"),
	btnDoc(30, 20, 60, 30, "Doctor"),
	btnPat(110, 20, 60, 30, "Patient"),
	btnEPC(190, 20, 60, 30, "EPC"),
	btnAdd(30, 550, 60, 30, "Add"),
	btnEdit(110, 550, 60, 30, "Edit"),
	btnDel(190, 550, 60, 30, "Delete")
{

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

void main_window::show()
{
	window.show();
}

void main_window::hide()
{
	window.hide();
}

void main_window::on_exit(function<void()> handler)
{
	exit_handler = handler;
}

