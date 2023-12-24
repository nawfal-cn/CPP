/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:05:46 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/24 19:39:39 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout<< GREEN <<"-> DiamondTrap Default Constractor called" << RESET <<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<< GREEN <<"-> DiamondTrap: Hah! Losers!"<< RESET <<std::endl;
}

DiamondTrap::DiamondTrap(const std::string &nameIn) : ClapTrap(nameIn + "_clap_name") , ScavTrap(nameIn), FragTrap(nameIn)
{
    std::cout<< GREEN <<"-> DiamondTrap " << nameIn << " is here, you all are f'up!" << RESET <<std::endl;
    this->name = nameIn;
    this->hitPts = FragTrap::hitPts;
    this->energyPts = ScavTrap::energyPts;
    this->attDamage = FragTrap::energyPts;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
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

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << name << " and my ClapTrap name is " << ClapTrap::name << "!" << std::endl;

}