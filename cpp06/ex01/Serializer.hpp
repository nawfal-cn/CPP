#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
class Data;

class Serializer
{
	private :
		Serializer();
	public :
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &other);
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif