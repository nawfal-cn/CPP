/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:02:54 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/12 22:18:29 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constractor
Fixed::Fixed() : value(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

// distructor
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = copy;
}
/* a constructor that takes a constant integer as a parameter
and converts it to the corresponding fixed-point value */
Fixed::Fixed(const int valueIn)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->value = (valueIn << this->bits);
}
/* a constructor that takes a constant floating-point number as a parameter
and converts it to the corresponding fixed-point value */
Fixed::Fixed(const float valueIn)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->value = roundf((valueIn * (1 << 8)));
}

// a member function that converts the fixed-point value to an integer value.
int Fixed::toInt(void) const
{
    return(this->value >> this->bits);
}

// a member function that converts the fixed-point value to a floating-point value.
float Fixed::toFloat(void) const
{
    return((float)this->value / (float)(1 << this->bits));
}

// copy assignment operator
Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if(this != &copy)
        this->value = copy.value;
    return (*this);
}

// value setter funtion
void Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->value = raw;
}

// value getter function
int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return(this->value);
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}