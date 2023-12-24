/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:49:06 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/23 20:10:59 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<< MAGENTA <<"-> FragTrap Default Constractor called" << RESET <<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<< MAGENTA <<"-> FragTrap: I've let them into pieces. See you!"<< RESET <<std::endl;
}

FragTrap::FragTrap(const std::string nameIn) : ClapTrap(nameIn)
{
    std::cout<< MAGENTA <<"-> FragTrap " << nameIn << " came for war! Let's bumb the enemies!" << RESET <<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if(this != &copy)
    {
        this->name = copy.name;
        this->hitPts = copy.hitPts;
        this->energyPts = copy.energyPts;
        this->attDamage = copy.attDamage;
    }
    return (*this);    
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a high five! Who's up for it?" << std::endl;
}