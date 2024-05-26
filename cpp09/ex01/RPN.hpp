#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>
#include <stdexcept>

float   calculate(float i1, float i2, char operation);
bool    validNum(std::string num);
bool    validOperator(std::string num);