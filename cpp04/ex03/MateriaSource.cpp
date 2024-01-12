#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout<< "MateriaSource Created." << std::endl;
}
MateriaSource::~MateriaSource()
{
	std::cout<< "MateriaSource Destroyed." << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const &copy)
{
	std::cout<< "Creating a copy of MateriaSource." << std::endl;
	*this = copy;
}
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	std::cout<< "Assigning a copy of MateriaSource." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

void learnMateria(AMateria*)
{

}

AMateria* createMateria(std::string const & type)
{

}
