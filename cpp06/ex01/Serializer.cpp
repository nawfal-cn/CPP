#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout<< "Serializer Created." << std::endl;
}

Serializer::~Serializer()
{
	std::cout<< "Serializer Destroyed." << std::endl;
}

Serializer::Serializer(Serializer const &copy)
{
	std::cout<< "Creating a copy of Serializer." << std::endl;
	*this = copy;
}

Serializer &Serializer::operator=(Serializer const &other)
{
	std::cout<< "Assigning a copy of Serializer." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}