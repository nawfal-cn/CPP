/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:38:34 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/18 22:50:15 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nameIn)
{
    std::cout<<"Constractor called"<<std::endl;
    this->name = nameIn;
    this->hitPts = 10;
    this->energyPts = 10;
    this->attDamage = 0;
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
        std::cout<<"ClapTrap can't attack because there's no Hit/Energy points left!"<<std::endl;    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPts > 0 && energyPts > 0)
    {
        std::cout<<"ClapTrap "<<name<<" takes "<<amount<<" points of damage."<<std::endl;
        this->hitPts -= amount;
    }
    else
        std::cout<<"ClapTrap can't take more damage there's no Hit/Energy points left!"<<std::endl;
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