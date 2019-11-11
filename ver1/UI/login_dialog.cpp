#include "login_dialog.h"

login_dialog::login_dialog()
	: window(400, 200, "Policlinic #1"),
	btnLgn(310, 145, 60, 30, "Login"),
	lgnInp(30, 30, 340, 30),
	pswInp(30, 80, 340, 30)

{
	window.position(400, 300);
	btnLgn.callback(on_login_clicked, this);

	window.end();
}

string login_dialog::get_login() {

	return lgnInp.value();
}
string login_dialog::get_password() {

	return pswInp.value();
}

void login_dialog::hide()
{
	window.hide();
}

void login_dialog::show()
{
	window.show();
}

void login_dialog::on_login_clicked_i()
{
	cout << "login dialog exit\n";
	login_handler();

}

void login_dialog::on_login_clicked(Fl_Widget*, void* v)
{
	((login_dialog*)v)->on_login_clicked_i();

}

void login_dialog::on_login(function<void()> handler)
{
	login_handler = handler;
}
