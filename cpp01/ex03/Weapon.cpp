/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:44:49 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 00:13:38 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string typIn)
{
    this->type = typIn;
}

void Weapon::setType(std::string typeIn)
{
    this->type = typeIn;
}
std::string Weapon::getType()
{
    return (this->type);
}
Weapon::~Weapon(){}
