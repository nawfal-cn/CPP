/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:57:39 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 12:27:08 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    name = "unknown";
    this->weapon = NULL;
}

HumanB::HumanB(std::string nameIn): weapon(NULL)
{
    this->name = nameIn;
}

void HumanB::setWeapon(Weapon &weaponIn)
{
    this->weapon = &weaponIn;
}

void HumanB::attack()
{
    if(this->weapon != NULL)
        std::cout<< this->name << " attacks with their " << this->weapon->getType() <<"\n";
    else
        std::cout<< this->name << " can't attack!\n";  
}

HumanB::~HumanB(){}
