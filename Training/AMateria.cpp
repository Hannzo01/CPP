#include "AMateria.hpp"

AMateria::AMateria(){
    // std::cout << "AMateria default constructor is called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type){
    // std::cout << "AMateria param constructor is called" << std::endl;
}

AMateria::AMateria(AMateria const& other) : _type(other._type){
    // std::cout << "AMateria copy constructor is called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const& other){
    // std::cout << "AMateria copy assignmenet op is called" << std::endl;

    if (this != &other)
        _type  = other._type;
    return *this;
}

AMateria::~AMateria(){
    // std::cout << "AMateria destructor is called " << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}