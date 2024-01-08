#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public :
		Cure();
		~Cure();
		Cure(Cure const &copy);
		Cure &operator=(Cure const &other);

		std::string const &getType() const;
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif