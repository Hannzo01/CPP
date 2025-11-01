#ifndef SED_HPP
#define	SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
	std::string _s1;
	std::string _s2;
	std::string _filename;

	public :
	Sed(const std::string &s1, const std::string &s2, const std::string &filename);
	int execute_replacement() const;
};


#endif