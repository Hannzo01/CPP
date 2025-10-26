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
		else
		{
			std::cout << "Enter a valid level\n";
			return 1;
		}
		switch (lvl)
		{
			case DEBUG: std::cout << "DEBUG\n";
				break;
			case INFO: std::cout << "INFO\n";
				break;
			case WARNING: std::cout << "WARNING\n";
				break;
			case ERROR: std::cout << "ERROR\n";
				break;
		
		default:
			break;
		}
	
	}
	else
		std::cout << "Available levels : WARNING, DEBUG, ERROR, INFO\n"; 
}