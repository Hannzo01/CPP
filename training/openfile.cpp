#include <iostream>
#include <fstream> // to read and write fild in c++ 

// this header gives 2 new tools classses
// std::ofstream >(outputfilestream) = a pipe to write data to a file;
// std::ifstream < (inputfiletream) = a pipe to read data from a file


// how to write to a file == think of it like cout bt for a file it uses << operator


int main()
{
	std::ofstream file("test.txt"); // write ; errors= permission to write,invlid path
	if (file.is_open() == false)
	{
		std::cerr << "error opening file\n";
	}
	file << "salam\n";
	file.close();

	std::ifstream file1 ("test1.txt"); // read ; error == file doesnt exist
	std::string line;
	std::getline (file1, line);
	while (std::getline(file1, line))
		std::cout << line << std::endl;
	file.close(); 
}