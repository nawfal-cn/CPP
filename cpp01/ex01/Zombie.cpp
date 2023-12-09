/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:23:18 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/26 21:41:19 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "unknown";
}

void Zombie::setName(std::string nameIn)
{
    this->name = nameIn;
}

void Zombie::announce()
{
    std::cout<< this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout<<"Zombie "<< this->name << " is destroyed!" <<"\n";
}
