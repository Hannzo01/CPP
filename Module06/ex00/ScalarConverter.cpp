#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other){
	(void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
	(void)other;
	return *this;
}

void ScalarConverter::_ischar(double d) {
    if (d < 0 || d > 127 )
        std::cout << "char: impossible" << std::endl;
    else if (isprint(static_cast<int>(d)))
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else 
        std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::_isint(double d){
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
}

int  ScalarConverter::_ispseudolite(const std::string &str){
    std::string pseudo_literals[] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
    for (int i = 0; i < 6; i++)
    {
        if (pseudo_literals[i] == str)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            if (pseudo_literals[i] == "nan" || pseudo_literals[i] == "+inf" || pseudo_literals[i] == "-inf")
                std::cout << "float: " << pseudo_literals[i] << "f" << std::endl;
            else
                std::cout << "float: " << pseudo_literals[i] << std::endl;

            if (pseudo_literals[i] == "nanf" || pseudo_literals[i] == "+inff" || pseudo_literals[i] == "-inff")
                std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
            else
                std::cout << "double: " << pseudo_literals[i] << std::endl;
            return (1);
        }
    }
    return (0);
}

void ScalarConverter::convert(const std::string& str)
{
	std::cout << std::fixed << std::setprecision(1);
    if (_ispseudolite(str) == 1)
    {
        return ;
    }

	if (str.length() == 1 && isdigit(str[0]) == 0)
	{
		char c = str[0];
        _ischar(c);
        _isint(c);
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
        return; 
	}

    char *endptr;
    double d = std::strtod(str.c_str(), &endptr);
    if (*endptr != '\0' && !(*endptr == 'f' && *(endptr + 1) == '\0'))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        _ischar(d);
        _isint(d);
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(d) << std::endl;
    }
}