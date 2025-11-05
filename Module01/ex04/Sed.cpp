#include "Sed.hpp"

Sed::Sed(const std::string &s1, const std::string &s2, const std::string &filename)
{
	_s1 = s1;
	_s2 = s2;
	_filename = filename;
}
int Sed::execute_replacement() const
{
	std::string line;
	std::string temp_line;
	std::string output_filename = _filename + ".replace";
	
	std::ifstream inputfile(_filename.c_str());
	if (inputfile.is_open() == false)
	{
		std::cerr << "Error : couldn't open input file" << std::endl; 
		return 1;
	}
	std::ofstream outputfile(output_filename.c_str());
	if (outputfile.is_open() == false)
	{
		inputfile.close();
		std::cerr << "Error : couldn't open output file" << std::endl;
		return 1;
	}
	while (std::getline(inputfile, line))
	{
		size_t found_pos;
		size_t start_pos = 0;
		while ((found_pos = line.find(_s1, start_pos)) != std::string::npos)
		{
			temp_line = temp_line + line.substr(start_pos, found_pos - start_pos); // if start_pos is 0then i can do start_pos, found_pos
			temp_line = temp_line + _s2;
			start_pos = found_pos + _s1.length();						
		}
		temp_line = temp_line + line.substr(start_pos);
		outputfile << temp_line << std::endl;
		temp_line = "";
	}
	inputfile.close();
    outputfile.close();
	return 0;
}


