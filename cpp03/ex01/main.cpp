/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:05 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 12:20:28 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("CL4P-TP");
    claptrap.attack("Corrector1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    ScavTrap scavtrap("SC4V-TP");
    scavtrap.attack("Corrector2");
    scavtrap.takeDamage(7);
    scavtrap.beRepaired(4);
    scavtrap.guardGate();

    return 0;
}