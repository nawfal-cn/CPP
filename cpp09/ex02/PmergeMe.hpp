#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <ctime>
#include <cstdlib>

std::vector<int> splitArguments(int ac, char **av);
bool validNum(const std::string& str);