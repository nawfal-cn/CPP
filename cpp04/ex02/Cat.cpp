/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:05:13 by nchaknan          #+#    #+#             */
/*   Updated: 2024/01/07 19:35:29 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout<<"Cat Created."<<std::endl;
    this->type = "Cat";
    this->catBrain = new Brain();
}
Cat::~Cat()
{
    std::cout<<"Cat Destroyed."<<std::endl;
    delete this->catBrain;
}
Cat::Cat(Cat const &copy)
{
    std::cout<<"Creating a copy of Cat."<<std::endl;
    this->catBrain = NULL;
    *this = copy;
}
Cat &Cat::operator=(Cat const &other)
{
    std::cout<<"Assigning a copy of Cat."<<std::endl;
    if(this != &other)
    {
        this->type = other.type;
        if(this->catBrain != NULL)
            delete this->catBrain;
        this->catBrain = new Brain(*other.catBrain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<< YELLOW <<"Meow"<< RESET <<std::endl;
}