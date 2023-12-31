#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Created."<<std::endl;
}
Brain::~Brain()
{
    std::cout<<"Brain Destroyed."<<std::endl;
}
Brain::Brain(Brain const &copy)
{
    std::cout<<"Creating a copy of Brain."<<std::endl;
	*this = copy;
}
Brain &Brain::operator=(Brain const &other)
{
    std::cout<<"Assigning a copy of Brain."<<std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return(*this);
}
