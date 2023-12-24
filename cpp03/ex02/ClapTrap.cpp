/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:38:34 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/23 20:09:20 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPts(0), energyPts(0), attDamage(0)
{
    std::cout<< YELLOW <<"-> Default Constractor called"<< RESET <<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<< YELLOW <<"-> Destractor called"<< RESET <<std::endl;
}

ClapTrap::ClapTrap(const std::string nameIn)
    : name(nameIn), hitPts(100), energyPts(100), attDamage(30)
{
    std::cout<< YELLOW <<"-> Constractor called"<< RESET <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
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

void ClapTrap::attack(const std::string& target)
{
    if(hitPts > 0 && energyPts > 0)
    {
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" and damage it by "<<attDamage<<" points."<<std::endl;
        this->energyPts -= 1;
    }   
    else
        std::cout<<"ClapTrap can't attack bc there's no Hit/Energy points left!"<<std::endl;    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPts > 0 && energyPts > 0)
    {
        std::cout<<"ClapTrap "<<name<<" takes "<<amount<<" points of damage."<<std::endl;
        this->hitPts -= amount;
    }
    else
        std::cout<<"ClapTrap can't take more damage bc there's no Hit/Energy points left!"<<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hitPts > 0 && energyPts > 0)
    {
        std::cout<<"ClapTrap "<<name<<" repairs itself by "<<amount<<" hit points."<<std::endl;
        this->hitPts += amount;
        this->energyPts -= 1;
    }
    else
        std::cout<<"ClapTrap can't be repaired because there's no Hit/Energy points left!"<<std::endl;
}