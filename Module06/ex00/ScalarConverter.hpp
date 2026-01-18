#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <limits>
class ScalarConverter
{
	private:
		static void _ischar(double d);
		static void _isint(double d);
		static int _ispseudolite(const std::string &str);
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
	public:
		static void convert (const std::string& str);
};

#endif 