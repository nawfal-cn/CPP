/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:38:34 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 12:25:18 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string nameIn)
    : name(nameIn), hitPts(100), energyPts(50), attDamage(20)
{
    std::cout<<"Constractor called"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destractor called"<<std::endl;
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