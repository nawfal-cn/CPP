#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

#include <iostream>
#include "Data.hpp"

struct Data;

class Serializer
{
	private :
		Serializer();
	public :
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif