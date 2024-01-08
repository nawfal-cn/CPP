#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout<< "AMateria Created." << std::endl;
}
AMateria::~AMateria()
{
	std::cout<< "AMateria Destroyed." << std::endl;
}
AMateria::AMateria(std::string const &typeIn) : type(typeIn)
{
	std::cout<< "AMateria Created." << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout<< "Creating a copy of AMateria." << std::endl;
	*this = copy;
}
AMateria &AMateria::operator=(AMateria const &other)
{
	std::cout<< "Assigning a copy of AMateria." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}