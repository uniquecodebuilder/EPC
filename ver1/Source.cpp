#include "main_window.h"
#include "exit_dialog.h"
#include "login_dialog.h"
#include <FL/Fl_Window.H>

using namespace std;

int main()
{

	login_dialog win1;
	win1.lgn_win();

	main_window win2;
	win2.mn_win();


	Fl_Box bx1(10, 10, 10, 10, "name");
	bx1.show();

	Fl_Button btn(200, 200, 100, 100, "Exit");
	btn.callback();







	system("pause");
	return(0);
}