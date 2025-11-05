#include "Harl.hpp"

const std::string LEVELS[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
const int NUM_LEVELS = 4;

int getLevelIndex(const std::string& cmd)
{
    for (int i = 0; i < NUM_LEVELS; ++i)
    {
        if (LEVELS[i] == cmd)
            return i; // Retourne l'index entier (0, 1, 2, ou 3)
    }
    return -1; // Retourne -1 si la chaîne n'est pas trouvée
}

int main(int argc , char *argv[])
{
	Harl c;
	
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
	}

    std::string cmd = argv[1];
    int lvl_index = getLevelIndex(cmd);

	switch (lvl_index)
	{
		case 0:
			c.debug();
			// FALLTHROUGH
		case 1:
			c.info();
			// FALLTHROUGH
		case 2:
			c.warning();
			// FALLTHROUGH
		case 3:
			c.error();
			break;
		default: 
			std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
