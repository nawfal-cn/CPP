#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <map>

bool valide_date(std::string &date);
bool valide_value(std::string &value);
std::string _trim(std::string str);

#endif