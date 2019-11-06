#include "main_window.h"
#include "exit_dialog.h"
#include "login_dialog.h"
#include <FL/Fl_Widget.H>

using namespace std;

int main()
{

	login_dialog lgn_win;
	//lgn_win.show();

	/*lgn_win.on_login(
		[&lgn_win]() {
			cout << "login handler called\n";

			lgn_win.hide();
		}
	);*/



	main_window mn_win;

	mn_win.on_exit(
		[&mn_win]() {
			cout << "exit handler called\n";

			mn_win.hide();
		}
	);

	mn_win.show();

	
	return Fl::run();
}