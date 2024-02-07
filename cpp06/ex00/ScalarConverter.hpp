#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

class ScalarConverter
{
	private :
		ScalarConverter();
	public :
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter &operator=(ScalarConverter const &other);
		static void convert(std::string input);
		static void toChar(std::string &input);
		static void toInt(std::string &input);
		static void toFloat(std::string &input);
		static void toDouble(std::string &input);
};

#endif