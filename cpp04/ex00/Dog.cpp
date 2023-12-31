/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:01:55 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/31 12:27:58 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Created."<<std::endl;
    this->type = "Dog";
}
Dog::~Dog()
{
    std::cout<<"Dog Destroyed."<<std::endl;
}
Dog::Dog(Dog const &copy)
{
    std::cout<<"Creating a copy of Dog."<<std::endl;
    *this = copy;
}
Dog & Dog::operator=(Dog const &other)
{
    std::cout<<"Assigning a copy of Dog."<<std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<< GREEN <<"Bark"<< RESET <<std::endl;
}