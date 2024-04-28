#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>

int calculate(int i1, int i2, char operation);
bool validNum(std::string num);
bool validOperator(std::string num);
std::stack<std::string> splitArguments(int argc, char **argv);