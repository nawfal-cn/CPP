/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:05 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 15:59:59 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");
    
    claptrap.attack("Corrector1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    scavtrap.attack("Corrector2");
    scavtrap.takeDamage(7);
    scavtrap.beRepaired(4);
    scavtrap.guardGate();

    return 0;
}