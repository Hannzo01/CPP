#include "Harl.hpp"

//we cant use switch with string

// enums are paired named integer

enum levels
{
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3
};

int main(int argc , char *argv[])
{
	Harl c;
	if (argc == 2)
	{
		levels lvl;
		std::string cmd = argv[1];
		if (cmd == "DEBUG")
			lvl = DEBUG;
		else if (cmd == "WARNING")
			lvl = WARNING;
		else if (cmd == "ERROR")
			lvl = ERROR;
		else if (cmd == "INFO")
			lvl = INFO;

		switch (lvl)
		{
			case DEBUG: 
				c.complain("DEBUG");
				c.complain("INFO");
				c.complain("WARNING");
				c.complain("ERROR");
				break;
			case INFO: 
				c.complain("INFO");
				c.complain("WARNING");
				c.complain("ERROR");
				break;
			case WARNING: 
				c.complain("WARNING");
				c.complain("ERROR");
				break;
			case ERROR:  
				c.complain("ERROR");
				break;
		
		default: std::cout << "[Probably complaining about insignificant problems ]\n";
			break;
		}
	
	}
	else
		std::cout << "Available levels : WARNING, DEBUG, ERROR, INFO\n"; 
}