#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout<< "Cure Created." << std::endl;
}
Cure::~Cure()
{
	std::cout<< "Cure Destroyed." << std::endl;
}
Cure::Cure(Cure const &copy)
{
	std::cout<< "Creating a copy of Cure." << std::endl;
	*this = copy;
}
Cure &Cure::operator=(Cure const &other)
{
	std::cout<< "Assigning a copy of Cure." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

std::string const &Cure::getType() const
{
	return (this->type);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout<< "* heals " << target << "’s wounds *" << std::endl;
}