#include "BusinessLogic/login_manager.h"

//#include "UI/doctor_widget.h"

#include "UI/main_window.h"
#include "UI/exit_dialog.h"
#include "UI/login_dialog.h"
#include <FL/Fl_Widget.H>
#include <FL/fl_ask.H>


using namespace std;

int main()
{
	//doctor_widget doc_scr;

	login_manager lgn_mgr;
	login_dialog lgn_win;
	main_window mn_win;
	
	lgn_win.on_login(
		[&lgn_win, &mn_win, &lgn_mgr]() {
			cout << "login handler called\n";

			string login = lgn_win.get_login();
			string password = lgn_win.get_password();

			if (lgn_mgr.check_credentials(login, password)) {
				lgn_win.hide();
				mn_win.show();
			}
			else {
				fl_alert("Wrong username or password");
			}
		
		}

	);



	mn_win.on_exit(
		[&mn_win, &lgn_win]() {
			cout << "exit handler called\n";
			mn_win.hide();
			lgn_win.show();
		}
	);

	lgn_win.show();

	return Fl::run();
}