#pragma once

#include <string>

class login_manager
{
public:

	bool check_credentials(std::string login, std::string password)
	{
		if (login == "user" && password == "pass" || 
			login == "Aliaksandr Siardziuk" && password == "password") {

			return true;
		}
		else
		{
			return false;
		}
	};

private:

};

