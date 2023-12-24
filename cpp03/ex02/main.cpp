/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:05 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/23 20:14:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{   
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");
    FragTrap fragtrap("FR4G-TP");
    
    claptrap.attack("Corrector1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    scavtrap.attack("Corrector2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(9);
    scavtrap.guardGate();

    fragtrap.attack("Corrector3");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(35);
    fragtrap.highFivesGuys();

    return 0;
}