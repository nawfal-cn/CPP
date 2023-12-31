/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:49:27 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/31 12:30:00 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
    std::cout<<"Animal Created."<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"Animal Destroyed."<<std::endl;
}

Animal::Animal(Animal const &copy)
{
    std::cout<<"Creating a copy of Animal."<<std::endl;
    *this = copy;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout<<"Assigning a copy of Animal."<<std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout<< CYAN <<"Silence"<< RESET <<std::endl;
}