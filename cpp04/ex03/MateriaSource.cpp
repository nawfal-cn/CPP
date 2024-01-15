#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout<< "MateriaSource Created." << std::endl;
	for(int i = 4; i < 4; i++)
		learnedMaterias[i] = NULL;
}
MateriaSource::~MateriaSource()
{
	std::cout<< "MateriaSource Destroyed." << std::endl;
	for(int i = 4; i < 4; i++)
		delete learnedMaterias[i];
}
MateriaSource::MateriaSource(MateriaSource const &copy)
{
	std::cout<< "Creating a copy of MateriaSource." << std::endl;
	for(int i = 0; i < 4; i++)
		this->learnedMaterias[i] = NULL;
	*this = copy;
}
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	std::cout<< "Assigning a copy of MateriaSource." << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if(this->learnedMaterias[i] != NULL)
				delete this->learnedMaterias[i];
		}
		for(int i = 0; i < 4; i++)
		{
			if(other.learnedMaterias[i] != NULL)
				this->learnedMaterias[i] = other.learnedMaterias[i];
		}
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(learnedMaterias[i] == NULL)
		{
			learnedMaterias[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(learnedMaterias[i] != NULL)
		{
			if(learnedMaterias[i]->getType() == type)
			{
				return learnedMaterias[i]->clone();
			}
		}
	}
	return NULL;
}