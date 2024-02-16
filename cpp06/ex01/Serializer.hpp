#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Serializer
{
	private :
		// put your private attributes here
	public :
		Serializer();
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &other);
};

#endif