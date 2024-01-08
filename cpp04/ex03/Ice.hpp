#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public :
		Ice();
		~Ice();
		Ice(Ice const &copy);
		Ice &operator=(Ice const &other);

		std::string const &getType() const;
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif