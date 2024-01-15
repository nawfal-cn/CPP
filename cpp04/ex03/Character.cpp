#include "Character.hpp"

Character::Character() : name("default")
{
	std::cout<< "Character Created." << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::~Character()
{
	std::cout<< "Character Destroyed." << std::endl;
	for(int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character::Character(std::string nameIn) : name(nameIn)
{
	std::cout<< "Character Created." << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
	std::cout<< "Creating a copy of Character." << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = copy;
}
Character &Character::operator=(Character const &other)
{
	std::cout<< "Assigning a copy of Character." << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if(this->inventory[i] != NULL)
				delete this->inventory[i];
		}
		for(int i = 0; i < 4; i++)
		{
			if(other.inventory[i] != NULL)
				this->inventory[i] = other.inventory[i];
		}
	}
	return(*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if(idx >= 0 && idx < 4 && inventory[idx])
		this->inventory[idx]->use(target);
}
