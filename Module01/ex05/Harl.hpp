#pragma once 
#include <iostream>


class Harl
{
	int	var; //delete
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public :
	void complain(std::string level);
};


