#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]: ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}


void Harl::info( void )
{
	std::cout << "[INFO]: ";
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger! If you did, I wouldnt be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "[WARNING]: ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error( void )
{
	std::cout << "[ERROR]: ";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

