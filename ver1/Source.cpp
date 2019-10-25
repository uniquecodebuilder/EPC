#include "main_window.h"
#include "exit_dialog.h"
#include "login_dialog.h"
#include <FL/Fl_Widget.H>

using namespace std;

int main()
{

	//login_dialog win1;
	//win1.lgn_win();

	main_window mw;


	mw.on_exit(
		[&mw]() {
			std:: cout << "exit handler called\n";

			mw.hide();
		}
	);

	mw.show();

	system("pause");
	return Fl::run();
}