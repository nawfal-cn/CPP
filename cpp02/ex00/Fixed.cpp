/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:11:04 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/06 19:01:42 by nchaknan         ###   ########.fr       */
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