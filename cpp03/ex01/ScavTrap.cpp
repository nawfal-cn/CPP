/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:04:17 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string nameIn) : ClapTrap(nameIn)
{
    std::cout << "Constructor: ScavTrap " << nameIn << " joins the party! Let's get looting!" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout<<"Destructor: I've finished my job, goodbye!"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(hitPts > 0 && energyPts > 0)
    {
        std::cout<<"ScavTrap "<<name<<" attacks "<<target<<" and damages it by "<<attDamage<<" points."<<std::endl;
        this->energyPts -= 1;
    }   
    else
        std::cout<<"ScavTrap can't attack because there are no Hit/Energy points left!"<<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<name<<" is now in Gate kepper mode."<<std::endl;
}