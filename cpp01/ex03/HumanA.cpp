/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:55:46 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 12:18:54 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameIn, Weapon &weaponIn): weapon(weaponIn)
{
    this->name = nameIn;
}

void HumanA::attack()
{
    std::cout<< this->name << " attacks with their " << this->weapon.getType() <<"\n";
}

HumanA::~HumanA(){}
