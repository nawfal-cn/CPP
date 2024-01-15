#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout<< "Ice Created." << std::endl;
}
Ice::~Ice()
{
	std::cout<< "Ice Destroyed." << std::endl;
}
Ice::Ice(Ice const &copy)
{
	std::cout<< "Creating a copy of Ice." << std::endl;
	*this = copy;
}
Ice &Ice::operator=(Ice const &other)
{
	std::cout<< "Assigning a copy of Ice." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

std::string const &Ice::getType() const
{
	return (this->type);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}