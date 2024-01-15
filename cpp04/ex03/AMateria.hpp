#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	protected :
		std::string const type;
	public :
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &typeIn);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &other);
		
		std::string const &getType() const; //Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif