#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		if (s1.empty())
			return 1;
		std::string s2 = argv[3];
		std::ifstream file(filename);
		if (file.is_open() == false)
		{
			std::cerr << "Error : couldn't not open file\n"; 
			return 1;
		}
		std::string line;
		std::string temp_line;
		std::ofstream file1(filename + "replace");
		if (file1.is_open() == false)
		{
			std::cerr << "Error : couldn't not open file\n"; 
			return 1;
		}
		while (std::getline(file, line))
		{
			size_t found_pos;
			size_t start_pos = 0;
			while ((found_pos = line.find(s1, start_pos)) != std::string::npos)
			{
				temp_line = temp_line + line.substr(start_pos, found_pos - start_pos); // if start_pos is 0then i can do start_pos, found_pos
				temp_line = temp_line + s2;
				// move the start point 
				start_pos = found_pos + s1.length();						
				file1 << temp_line;
			}
			temp_line = temp_line + line.substr(start_pos);
			file1 << temp_line << std::endl;
		}
		return 0;
	}
	std::cerr << "Invalid args " << std::endl;
	return 1;
}