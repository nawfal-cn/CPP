#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private :
		AMateria* learnedMaterias[4];
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource &operator=(MateriaSource const &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif