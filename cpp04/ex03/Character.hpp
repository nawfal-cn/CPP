#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
	private :
		std::string name;
		AMateria *inventory[4];
	public :
	Character();
	~Character();
	Character(std::string nameIn);
	Character(Character const &copy);
	Character &operator=(Character const &other);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif