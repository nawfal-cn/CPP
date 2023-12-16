/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:02:54 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/14 22:13:01 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constractor
Fixed::Fixed() : value(0) {}

// distructor
Fixed::~Fixed() {}

// copy constructor
Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}
/* a constructor that takes a constant integer as a parameter
and converts it to the corresponding fixed-point value */
Fixed::Fixed(const int valueIn)
{
    this->value = (valueIn << this->bits);

}
/* a constructor that takes a constant floating-point number as a parameter
and converts it to the corresponding fixed-point value */
Fixed::Fixed(const float valueIn)
{
    this->value = roundf(valueIn * (1 << this->bits));

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
    if(this != &copy)
        this->value = copy.value;
    return (*this);
}

// value setter funtion
void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

// value getter function
int Fixed::getRawBits(void) const
{
    return(this->value);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}