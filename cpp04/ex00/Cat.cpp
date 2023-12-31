/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:05:13 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/31 12:28:40 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Created."<<std::endl;
    this->type = "Cat";
}
Cat::~Cat()
{
    std::cout<<"Cat Destroyed."<<std::endl;
}
Cat::Cat(Cat const &copy)
{
    std::cout<<"Creating a copy of Cat."<<std::endl;
    *this = copy;
}
Cat & Cat::operator=(Cat const &other)
{
    std::cout<<"Assigning a copy of Cat."<<std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<< YELLOW <<"Meow"<< RESET <<std::endl;
}