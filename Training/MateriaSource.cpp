#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        array[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource& other){
    for (int i = 0; i < 4; i++)
    {
        array[i] = other.array[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (&other == this)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        delete array[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (other.array[i] != NULL)
            array[i] = other.array[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (array[i] == NULL)
        {
            array[i] = materia;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{   
    for (int i = 0 ; i < 4; i++)
    {
        if (array[i] && array[i]->getType() == type)
        {
            return array[i]->clone();
        }
    }
    return NULL;
}