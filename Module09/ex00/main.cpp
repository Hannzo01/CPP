#include "BitcoinExchange.hpp"

int process_line(std::string line)
{
	int i = 0;
	int counter = 0;
	while (i < line.size())
	{
		if (!isdigit(line[i]) && line[i] != '-' && line[i] != ' ' && line[i] != '|')
			return -1;
		if (line[i] == '-')
			counter++;
		i++;
	}
	return counter;
}

float get_float_value(std::string line)
{
    float val = atof(line.c_str());

    if (val < 0)
        throw std::runtime_error("Error: not a positive number.");
    if (val > 1000)
        throw std::runtime_error("Error: too large a number.");
    
    return val;
}

void valid_date(std::string line)
{
	size_t pos1 = line.find('-');
	size_t pos2 = line.find('-', pos1 + 1);
	
	std::string year = line.substr(0, pos1);
	std::string month = line.substr(pos1 + 1, pos2 - pos1 - 1);
	std::string day = line.substr(pos2 + 1);

	size_t m = atoi(month.c_str());
	size_t d = atoi(day.c_str());
	int y = atoi(year.c_str());

	if (m < 1 || m > 12) throw std::runtime_error("Error: bad input => " + line);
	if (d < 1 || d > 31) throw std::runtime_error("Error: bad input => " + line);
	if (d == 31 && (m == 4 || m == 6 || m == 9 || m == 11)) throw std::runtime_error("Error: bad input => " + line);
	if (m == 2 && d > 29) throw std::runtime_error("Error: bad input => " + line);
	
}


void execute(std::string date, float value)
{
	std::map<std::string, float> map;

	
}


void	split_line(std::string line)
{
	if (line == "date | value") return;

	if (process_line(line) !=  2)
        throw std::runtime_error("Error: bad input => " + line);

	size_t pos = line.find('|');
	if (pos == line.npos)
		throw std::runtime_error("Error: bad input => " + line);

	std::string data_line = line.substr(0, pos);
	std::string value_line = line.substr(pos + 1);

	valid_date(data_line);
	float final_val = get_float_value(value_line);

	execute(data_line, final_val);
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        try {
            if (line.empty()) continue;
            	split_line(line);
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}