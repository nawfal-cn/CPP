/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:01:55 by nchaknan          #+#    #+#             */
/*   Updated: 2024/01/07 19:35:30 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout<<"Dog Created."<<std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain();
}
Dog::~Dog()
{
    std::cout<<"Dog Destroyed."<<std::endl;
    delete this->dogBrain;
}
Dog::Dog(Dog const &copy)
{
    std::cout<<"Creating a copy of Dog."<<std::endl;
    this->dogBrain = NULL;
    *this = copy;
}
Dog &Dog::operator=(Dog const &other)
{
    std::cout<<"Assigning a copy of Dog."<<std::endl;
    if(this != &other)
    {
        this->type = other.type;
        if(this->dogBrain != NULL)
            delete this->dogBrain;
        this->dogBrain = new Brain(*other.dogBrain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<< GREEN <<"Bark"<< RESET <<std::endl;
}