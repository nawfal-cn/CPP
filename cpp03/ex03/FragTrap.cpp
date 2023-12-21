/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:49:06 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 14:49:18 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string nameIn) : ClapTrap(nameIn)
{
    std::cout<< MAGENTA <<"-> FragTrap " << nameIn << " came for war! Let's bumb the enemies!" << RESET <<std::endl;
}
FragTrap::~FragTrap()
{
    std::cout<< MAGENTA <<"-> FragTrap: I've let them into pieces. See you!"<< RESET <<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a high five! Who's up for it?" << std::endl;
}